#ifndef AYUDAS_H
#define AYUDAS_H


#include <iostream>
using namespace std;

void sillas(bool **puestos);
void cuadro(unsigned int **matriz ,unsigned int alto, unsigned int ancho,unsigned apuntador,unsigned grande);
unsigned decima(unsigned numero);
void menu_cua(unsigned **cuadrado,unsigned alto,unsigned ancho);

void  datain(unsigned *cuadrado,char nombre);
//bool cdentroc(unsigned *cuadradoA,unsigned *cuadradoB,unsigned test);

void posibilidades(unsigned *suma, unsigned lado,unsigned x,unsigned y);
#endif // AYUDAS_H
