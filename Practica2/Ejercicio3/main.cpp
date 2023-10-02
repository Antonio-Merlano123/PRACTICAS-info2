/*Ejercicio 3:

    -> b
    -> b+2
    -> *(b+2)
    -> *(b+2)+1
    -> *(*(b+2)+1)
    -> b[3][1]
    -> *b++  */

#include <iostream>
using namespace std;

int main()
{
    unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}};
    cout<<"La Figura 1, que se presenta a continuación, ilustra la representación del arreglo b en memoria. Complete la"
          " numeración de las direcciones de memoria, en notación hexadecimal, para cada elemento del arreglo b"<<endl<<endl;

    cout<<"->Para b[]: "<<endl<<
          "  b[]: "<<b<<endl<<endl;

    cout<<"->Para b[0]: "<<endl<<
          "  b[0][0]: "<<&b[0][0]<<" Su valor es: "<<*(*(b))<<endl<<endl;

    cout<<"->Para b[0]: "<<endl<<
          "  b[0][1]: "<<&b[0][1]<<" Su valor es: "<<*(*(b)+1)<<endl<<endl;

    cout<<"->Para b[1]: "<<endl<<
          "  b[1][0]: "<<&b[1][0]<<" Su valor es: "<<*(*(b+1))<<endl<<endl;

    cout<<"->Para b[1]: "<<endl<<
          "  b[1][1]: "<<&b[1][1]<<" Su valor es: "<<*(*(b+1)+1)<<endl<<endl;

    cout<<"->Para b[2]: "<<endl<<
          "  b[2][0]: "<<&b[2][0]<<" Su valor es: "<<*(*(b+2))<<endl<<endl;

    cout<<"->Para b[2]: "<<endl<<
          "  b[2][1]: "<<&b[2][1]<<" Su valor es: "<<*(*(b+2)+1)<<endl<<endl;


    cout<<"->Para b[3]: "<<endl<<
          "  b[3][0]: "<<&b[3][0]<<" Su valor es: "<<*(*(b+3))<<endl<<endl;


    cout<<"->Para b[2]: "<<endl<<
          "  b[3][1]: "<<&b[3][1]<<" Su valor es: "<<*(*(b+3)+1)<<endl<<endl;


    cout<<"(2) Determine de acuerdo a lo ilustrado en la Figura 1 el valor correspondiente de las siguientes expresiones: "<<endl;

    cout<<endl<<"-> b: "<<b<<endl<<endl;

    cout<<"-> b+2: "<<b+2<<endl<<endl;

    cout<<"-> *(b+2): "<<*(b+2)<<endl<<endl;

    cout<<"-> *(b+2)+1: "<<*(b+2)+1<<endl<<endl;

    cout<<"-> *(*(b+2)+1): "<<*(*(b+2)+1)<<endl<<endl;

    cout<<"-> &(b[3][1]): "<< &(b[3][1])<<endl<<endl;

    return 0;
}
