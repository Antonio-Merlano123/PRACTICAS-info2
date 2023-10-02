/*Problema 11. .*/

#include <iostream>
using namespace std;

int main()
{
    int asientos[15][20];
    char letras[15]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o'};
    char reserva;
    int columna,fila=0,opciones=0;

    //Este ciclo llena la matriz con el numero  43 que es el simbolo  '+' en ASCII
    for(int i=0;i<15;i++){
        for(int j=0;j<20;j++){
            asientos[i][j]=43;
        }
    }


    do{             //Ciclo que se ejecuta mientras la opcion sea diferente de 6; aca se hace todo el programa.
        cout<<endl<<"                                 MENU                               "<<endl;
        cout<<"1.Reservar asientos"<<endl<<
            "2.Cancelar reserva"<<endl<<"3.Ver estado de la sala"<<endl<<"4.Reservar todo"<<endl<<"5.Poner dispoble toda la sala"<<endl<<"6.salir"<<endl<<endl<<"Ingrese la opcion que desea: ";
        cin>>opciones;


        //-----------------------------------------------------------------------------------------------------------------------------
        switch (opciones) {
        case 1:                 //Caso 1: hace las reservas
            do{
                cout<<"Usted eligio la opcion de reservar asientos!"<<endl;
                cout<<"->Ingrese la fila(letra entre 'a' y 'o': ";cin>>reserva;

                for(fila=0;fila<15;fila++){             //Este ciclo verifica que la fila ingresada sea correcta
                    if(letras[fila]==reserva){
                        break;}
                }
            }while (letras[fila]!=reserva);
            //--------------------------------------------------------------
            do{                                       //Este ciclo verifica que el numero del asiento sea correcto
                cout<<"ingrese numero del asiento(entre 1 y 20): ";cin>>columna;
            }while(columna<1 || columna>21);

            //Este ciclo hace la reserva con el numero 45 que es simbolo  '-' en ASCII
            for(int i=0;i<15;i++){
                for(int j=0;j<20;j++){
                    asientos[fila][columna-1]=45;   //a columnas se le resta 1 por que el ususario ingrese un numero entre 1-20
                }
            }

            break;

        case 2:             //Caso 2: Cancela las reservaciones.
            do{
                cout<<"Usted eligio cancelar la reserve!"<<endl;
                cout<<"->Ingrese la fila(letra entre 'a' y 'o': ";cin>>reserva;

                for(fila=0;fila<15;fila++){         //Verifica que la fila ingresada sea correcta
                    if(letras[fila]==reserva){
                        break;}

                }

            }while(letras[fila]!=reserva);
            //------------------------------------------------------------------

            do{                         //Este ciclo verifica que el numero del asiento sea correcto

                cout<<"->Ingrese numero del asiento(entre 1 y 20): ";cin>>columna;


            }while(columna<1 || columna>21);

            //Este ciclo hace la cancelacion con el numero 43 que es simbolo  '+' en ASCII
            for(int i=0;i<15;i++){
                for(int j=0;j<20;j++){
                    asientos[fila][columna-1]=43;
                }
            }
            break;
        case 3:         //Imprime la matriz
            cout<<"Usted eligio ver el estado de la sala!"<<endl<<endl;
            cout<<"'+' son los asientos disponibles y '-' los reservados."<<endl<<endl;

            for(int i=0;i<15;i++){
                cout<<letras[i];
                for(int j=0;j<20;j++){
                    cout<<"| " << (char)*(*(asientos+i)+j)<<" ";       /*Convierte el numero 43 y 45 en los simbolos correspondientes
                                                                                  metiendose en la posicion correspondiente de i y j*/
                }cout<<"|"<<endl<<endl;

            }
            break;

        case 4:                 //Caso 4: Reserva toda la sala

            cout<<"->Usted eligio RESERVAR TODA la sala! "<<endl;
            for(int i=0;i<15;i++){
                for(int j=0;j<20;j++){
                    asientos[i][j]=45;          //Pone el numero 45 que es el simbolo '-' en ASCII en toda la sala
                }
            }
            break;

        case 5:              //Caso 5: Pone dispone toda la sala

            cout<<"->Usted eligio poner DISPONIBLE TODA la sala!"<<endl;
            for(int i=0;i<15;i++){
                for(int j=0;j<20;j++){
                    asientos[i][j]=43;      //Pone el numero 43 que es el simbolo '+' en ASCII en toda la sala
                }
            }
            break;

        case 6:
            cout<<"->Usted eleigio salir de las opciones!"<<endl<<endl;
            break;
        default:
            cout<<"->Opcion no valida,intente otra vez!"<<endl;
            break;
        }

    }while (opciones!=6);        //Si la opcion elegida es 6, el programa termina.
    return 0;
}
