/*Problema 7.*/
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    cout<<"Este programa compara una palabra y quita de ella "
          "las letras que se encuentre repetidas"<<endl<<endl;

    char palabra[20]={},repetido[20]={};
    int contador=0,tam=0;
    cout<<"Ingrese palabra: ";cin.getline(palabra,20,'\n');  /*cin.getline(arreglo,numero de elemtos que tentra,forma de terminar)      manera de ingresar elemtos a un arreglo*/

    for(int i=0;i<=20;i++){ //recorre la palabra ingresada
        for(int j=0;j<=20;j++){ //recorre el string donde se esta guardando las no repetidas
            if(tolower(palabra[i])==tolower(repetido[j])){ //convierte a minusculas
                contador++;
            }
        }
        if(contador==0){
            repetido[tam]=palabra[i];  //se encarga de llenar el arreglo de las no repetidas
            tam++;
        }
        contador=0;
    }
    cout<<"Original: "<<palabra<<endl;
    cout<<"Sin letras repetidas: "<<repetido<<endl;

    return 0;
}
