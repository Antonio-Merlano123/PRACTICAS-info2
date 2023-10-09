#ifndef PRIMER_METODO_H
#define PRIMER_METODO_H

#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
using namespace std;


unsigned long  tam(char* nombre );

void lecturaM1(char * datos,char* nombre,unsigned long  tamano);

void CbinarioM1(char *bin ,unsigned letra);
void CdecimalM1(char *bin ,unsigned *letra);

void codificacionM1(char *datos,unsigned long  tamano,unsigned contra,unsigned short caso,unsigned long long *puntero,bool deco);
void aplicaso(unsigned short caso,char *datos, unsigned contra,unsigned long long *puntero);

void escribirM1 ( char *datos, char *nombre, unsigned  long tamano);

#endif // PRIMER_METODO_H
