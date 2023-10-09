
#include "primer_metodo.h"
using namespace std;

int main()
{
    char nombre[]="d.txt";
    //char nombre[]="texto.txt";
    unsigned  long    tamano=tam(nombre);
    unsigned contra=5;
    char *datos= new char ((tamano*8)+1);
    datos[tamano]='\0';


    lecturaM1(datos,nombre,tamano);


    cout<<endl<<datos<<endl;
    unsigned long long pun=0;
    //codificacionM1(datos,tamano,contra,0,&pun,true);
    cout<<endl<<datos<<endl;
    pun=0;
    codificacionM1(datos,tamano,contra,0,&pun,false);
    cout<<endl<<datos<<endl;
    char no[]="texto.txt";
    //char no[]="d.txt";
    escribirM1(datos,no,tamano);




    delete datos ;


    /*string texto,nombre="texto.txt";
    unsigned long long tamano;
                texto=lecturam2(nombre,&tamano,0);


                m2_codificacion(tamano,contra,nombre,texto);*/

    return 0;
}
