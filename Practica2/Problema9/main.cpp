/*Problema 9. */

#include <iostream>
#include<math.h>

using namespace std;

int main()
{

    int num, caracter,ndigitos,suma=0,x=1;
    cout << "Ingrese N (se separa la cadena cada 'N' numeros): ";cin>>num;

    cout<<"Ingrese una cadena de numeros: ";cin>>caracter;

    cout<<"Cadena original: "<<caracter<<endl;

    x=pow(10,num);                      //Nos da la base para trabajar con los numeros

    while(caracter>num){
        ndigitos=caracter%x;        //se separan los 'n' numeros de la cadena original y se llevan a ndigitos

        caracter=caracter/x;

        suma+=ndigitos;
    }
    suma+=caracter;
    cout<<"la Suma es: "<<suma<<endl;

    return 0;
}
