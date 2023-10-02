/*Problema 3. .*/

#include <iostream>
#include <string.h>
using namespace std;

//Prototipo de la funcion
bool comparador(char cadena1[],char cadena2[],int tam1,int tam2);

//Funcion de prueba
int main()
{
    char cadena1[]="Problema3",cadena2[]="problema3";
    comparador(cadena1,cadena2,4,4);        //Llamamos a la funcion para probarla

    return 0;
}

//Cuerpo de la funcion
bool comparador(char cadena1[],char cadena2[],int tam1,int tam2){
       bool bandera=false;
       int contador=0;

       if(tam1!=tam2){                                 //determina si los tamaños de las cadenas son diferentes
           bandera=true;
           cout<<"Las cadenas no son iguales"<<endl;
       }
       while(bandera==false && contador<tam1){         //Ciclo que compara si las cadenas NO son iguales
           for(int i=0;i<=tam1;i++){
               if(cadena1[i]!=cadena2[i]){
                   bandera=true;
                   cout<<"Las cadenas "<<"''"<<cadena1<<"''"<<" y "<<"''"<<cadena2<<"''"<<" NO son iguales!"<<endl;
                   break;
               }
               contador++;
           }
       }
       if(bandera==false){                            //Determi que las cadenas son iguales
           cout<<"Las cadenas "<<"''"<<cadena1<<"''"<<" y "<<"''"<<cadena2<<"''"<<" SI son iguales!"<<endl;
       }


    return bandera;         //retorna un  booleano
}
