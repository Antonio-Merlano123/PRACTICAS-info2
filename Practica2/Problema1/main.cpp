

#include <iostream>
using namespace std;

int main()
{
    int lista[]={50000,20000,10000,5000,2000,1000,500,200,100,50,0},dinero,aux;

    cout<<"Ingrese el dinero: ";cin>>dinero;
    aux=dinero;

    for(int i=0;lista[i]!=0;i++){   //ciclo que recorre el arreglo mientras el elemento [i] sea diferente de 0

        dinero=aux/lista[i];       //a la variable dinero se le lleva la cantidad de billetes del elemento [i]

        aux=aux%lista[i];         //a la variable aux se le lleva el resultado de aplicar modulo al dinero inicial

        cout<<lista[i]<<": "<<dinero<<endl; //Imprime la cantidad de billetes asociado al elemeto [i]

    }
    if(aux>0)cout<<"Resto: "<<aux<<endl;  //Verifica si hay algun resto, si lo hay, muestra cual es
    else cout<<"Resto: "<<aux<<endl;      //Verifica que no  hay resto y nos muestra dicho resultado
    return 0;
}
