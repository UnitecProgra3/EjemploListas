#include <iostream>
#include "Personaje.h"
#include "Curador.h"

using namespace std;

int main()
{
    Curador curador1(100,10,20);
    Curador curador2(150,5,10);
    curador1.imprimir();
    curador2.imprimir();
    curador1.atacar(&curador2);
    curador2.atacar(&curador1);
    curador1.imprimir();
    curador2.imprimir();
    curador1.activarPoder();
    curador2.activarPoder();
    curador1.imprimir();
    curador2.imprimir();
    return 0;
}
