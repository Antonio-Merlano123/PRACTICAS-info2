#include "segundo_metodo.h"

void m2_codificacion(unsigned long long int tamano ,unsigned long int semilla,string nombre,string texto)
{
    texto=metodo2(texto,tamano,semilla,0);

    texto=traduccionM2(tamano,texto);

    escribirM2(texto,nombre);

}
//cambiar en un futuro
string m2_decodificacion(unsigned long long int *tamano ,unsigned long int semilla,string nombre)
{
    string texto;
    texto=lecturam2(nombre,tamano,0);
    texto=r_metodo2(texto,*tamano,semilla,0);

    texto=traduccionM2(*tamano,texto);
    return texto;
}


string lecturam2(string nombre, unsigned long long* tamano, unsigned pasar)
{
    fstream archivo;
    archivo.open(nombre, fstream::in | fstream::binary | fstream::ate);
    *tamano = archivo.tellg();
    archivo.seekg(0);

    if (!archivo.is_open())
    {
        cout << "Archivo no encontrado" << endl;
        return ""; // Devuelve una cadena vacía en caso de error
    }

    string datos;
    int letra;

    for (; pasar > 0; pasar--)
    {
        letra = archivo.get();
        if (letra == EOF)
        {
            cout << "Error al leer el archivo" << endl;
            return ""; // Devuelve una cadena vacía en caso de error
        }
    }

    for (unsigned long long int i = 0; i < *tamano - pasar; i++)
    {
        letra = archivo.get();
        if (letra == EOF)
        {
            cout << "Error al leer el archivo" << endl;
            return ""; // Devuelve una cadena vacía en caso de error
        }

        string binario;
        binario = bin_m2(static_cast<unsigned int>(letra));
        datos = datos + binario;
    }

    return datos;
}



string bin_m2(unsigned int ascii )
{

    string bits, codificado ;
    string prueba;

        bits="";
        while(ascii > 0)
        {
            if(ascii % 2 == 0)
            {
                bits = '0'+bits;
            }
            else
            {
                bits = '1'+ bits;
            }
            ascii = (int) ascii/2;
        }

        while(bits.size()<8)
        {
            bits='0'+ bits;
        }
        codificado= codificado+bits;


    return codificado;

}

string traduccionM2(unsigned long long int tamano, string bina)//traduce de binario a squi
{

    string escribir;
    unsigned int letra;

    for(unsigned int i=0,e=0;e<tamano;e++)
    {   letra=0;
        for(int a=7;0<=a;i++,a--)
        {
            letra=letra+(pow((int(bina[i])-48)*2,a));
        }

        if(bina[i-1]=='0')
            escribir= escribir+ char(letra-1);
        else escribir=escribir + char(letra);

    }
    return escribir;

}

//metodo 2  codificacion
string metodo2(string text, unsigned long long tamano, unsigned long int  semilla,unsigned long int posicion)
{

    string nex,ultimo;

    for(unsigned int i=0;i<(tamano*8)/semilla and posicion<tamano*8;i++)
    {
        ultimo=text[posicion+semilla-1];
        nex=text[posicion+1];
        if(2<=semilla)
        {
            text[posicion+1]=text[posicion];
            text[posicion]=ultimo[0];
            posicion=posicion+2;
        }

        for(unsigned int e=2;e<semilla;e++,posicion++)
        {
            ultimo=nex;
            nex=text[posicion];
            text[posicion]=ultimo[0];
        }
    }

    if((tamano*8-posicion)%semilla != 0)
    {
        unsigned long int conteo=(tamano*8)-posicion;
        text=metodo2(text,tamano,conteo,posicion);
    }
    return text;
}


//metodo dos decodificacion
string r_metodo2(string text, unsigned long long tamano, unsigned long int  semilla,unsigned long long int posicion)
{
    string atras,ultimo;

    for(unsigned int i=0;i<(tamano*8)/semilla and posicion<tamano*8;i++)
    {
        ultimo=text[posicion];
        atras=text[posicion+1];
        text[posicion]=atras[0];
        posicion++;
        for(unsigned int e=1;e<semilla;e++,posicion++)
        {
            atras=text[posicion+1];
            text[posicion]=atras[0];
        }
        text[posicion-1]=ultimo[0];
    }
    if((tamano*8-posicion)%semilla != 0)
    {
        unsigned long int conteo=(tamano*8)-posicion;
        text=r_metodo2(text,tamano,conteo,posicion);
    }
    return text;
}

void escribirM2 ( string datos,string nombre)
{
    fstream text (nombre, fstream::out | fstream::binary);
    text<<datos;

    text.close();
}
