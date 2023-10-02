/*Problema 13.*/

#include <iostream>
using namespace std;

//Variables Globales
int contador=0,formula=0,fila=6,colum=8;


//Protoripo de funciones
void mostrarMatriz(int arreglo[6][8]);
void Estrella(int arreglo[6][8]);


int main()
{

    cout<<"La siguiente matriz representa la fotografía digitalizada de una porción de la galaxia NGC 1300 que está "
          "ubicada a 61.000.000 de años luz del planeta Tierra."<<endl<<endl;

    //Arreglo con la matriz
    int arreglo[6][8]={{0,3,4,0,0,0,6,8},{5,13,6,0,0,0,2,3},{2,6,2,7,3,0,10,0},{0,0,4,15,4,1,6,0},{0,0,7,12,6,9,10,4},{5,0,6,10,6,4,8,0}};

    mostrarMatriz(arreglo);
    cout<<endl;
    Estrella(arreglo);
    cout<<"En la fotografia de la galaxia NGC 1300 se encontraron: "<<contador<<" estrellas!"<<endl;

    return 0;
}

//Funcion que imprime la matriz
void mostrarMatriz(int arreglo[6][8]){

    for(int i=0; i<fila;i++){
        for(int j=0; j<colum; j++){
            cout<<"   |"<<arreglo[i][j]<<"";
        }
        cout<<"|"<<endl<<endl;
    }

}

//Funcion que me dice cuantas estrelllas
void Estrella(int arreglo[6][8]){
    for(int i=0; i<fila; i++){
        for(int j=0; j<colum; j++){
           formula=(arreglo[i][j]+arreglo[i][j-1]+arreglo[i][j+1]+arreglo[i-1][j]+arreglo[i+1][j])/5;

            if(i==0 || j==0 ){
                cout<<"En la posicion ["<<i<<"]["<<j<<"] No hay estrella!"<<endl<<endl;;
            }
            if(formula>6 && i!=0 && j!=0){
                cout<<"->En la posicion ["<<i<<"]["<<j<<"] Hay una estrella!"<<endl<<endl;;
                contador++;
            }

        }
    }

}
