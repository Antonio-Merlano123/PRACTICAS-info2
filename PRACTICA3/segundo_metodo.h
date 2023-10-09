#ifndef SEGUNDO_METODO_H
#define SEGUNDO_METODO_H

#include "primer_metodo.h"


void m2_codificacion(unsigned long long int ,unsigned long int,string,string);
string m2_decodificacion(unsigned long long int *,unsigned long int,string);
string lecturam2(string nombre,unsigned long long* tamano,unsigned pasar);
string bin_m2( unsigned int );
string metodo2(string,unsigned long long,unsigned long int,unsigned long int);
string r_metodo2(string , unsigned long long , unsigned long int  ,unsigned long long int );
string traduccionM2(unsigned long long int tamano, string bina);
void escribirM2 ( string ,string );

#endif // SEGUNDO_METODO_H
