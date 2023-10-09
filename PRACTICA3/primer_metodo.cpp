#include "primer_metodo.h"



unsigned long  tam(char* nombre )
{
    unsigned long long tamano;

    fstream archivo(nombre, fstream::in | fstream::ate);
    tamano=archivo.tellg();
    archivo.close();

    return tamano;
}


void lecturaM1(char * datos,char* nombre,unsigned long  tamano)
{

    fstream archivo;
            archivo.open(nombre, fstream::in |fstream::binary );
    unsigned int letra;
   char byte[8];
    for(unsigned long  int i=0, posicion=0 ; i<tamano ;i++,posicion++)
    {    letra=archivo.get();

         CbinarioM1(byte,letra);
         for(unsigned  a=0; a<8;a++ )
         {
             datos[(posicion*8)+a]=byte[a];
         }
    }
    archivo.close();
}


void CbinarioM1(char *bin ,unsigned letra)
{
    for (short int var = 7; var >= 0; --var)
    {

        bin[var]=char(48+(letra%2));
        letra=letra/2;
    }
}

void CdecimalM1(char *bin ,unsigned *letra)
{
    *letra=0;


    for (int var = 7,expo=0; var>=0 ; --var,expo++)
    {
        *letra= *letra+((unsigned(bin[var])-48)*pow(2,expo));
    }
}

void codificacionM1(char *datos,unsigned long  tamano,unsigned contra,unsigned short caso,unsigned long long *puntero,bool deco)
{

    if(tamano*8> *puntero)
    {

        unsigned short metodo=0;
        if(deco)
        {
            unsigned  cantidad1=0,cantidad0=0;


            for (unsigned var = 0; var < contra; ++var)
            {
                if(datos[*puntero+var]=='1') cantidad1++;

                else cantidad0++;
            }
            if(cantidad0>cantidad1) metodo=1;
            else if(cantidad0 < cantidad1) metodo=2;
        }


        if((*puntero+contra)>=tamano*8)
        {
            aplicaso(caso,datos,(tamano*8)-*puntero,puntero);
        }
        else
        {
            aplicaso(caso,datos,contra,puntero);
        }
        if(not(deco))
        {
            unsigned  cantidad1=0,cantidad0=0;


            for (unsigned var = 0; var < contra; ++var)
            {
                if(datos[*puntero+var-contra]=='1') cantidad1++;

                else cantidad0++;
            }

            if(cantidad0>cantidad1) metodo=1;
            else if(cantidad0 < cantidad1) metodo=2;
        }

        codificacionM1(datos,tamano,contra,metodo,puntero,deco);

    }
}


void aplicaso(unsigned short caso,char *datos, unsigned contra,unsigned long long *puntero)
{
    for (unsigned var = 0,con=0; var < contra; ++var, *puntero=*puntero+1)
    {
        if(con==caso)
        {
            if(datos[*puntero]=='0') datos[*puntero]='1';
            else datos[*puntero]='0';
            con=0;
        }
        else con++;

    }
}


void escribirM1 ( char *datos, char *nombre, unsigned long  tamano)
{
    char byt[8];

    for (unsigned var = 0,ocho=0,tam=0,num; tam < tamano; ++var)
    {
        if(ocho<8)
        {
            byt[ocho]=datos[var];
            ocho++;
        }
        else
        {
            CdecimalM1(byt,&num);

            datos[tam]=char(num);
            tam++;
            byt[0]=datos[var];
            ocho=1;
        }

    }
    datos[tamano]='\0';
    cout<<endl;
    fstream text(nombre, fstream::out  |fstream::binary);
    text.write( datos,tamano);
    //text<< datos;
    text.close();
}










