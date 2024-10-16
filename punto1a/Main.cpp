#include <iostream>
#include "Pila.h"

int main()
{
    Pila pila(3);

    Cuenta cuenta1(120, 45185152, 5500.0);
    Cuenta cuenta2(125, 45125156, 1000.0);
    Cuenta cuenta3(130, 45141541, 500.0);

    pila.push(cuenta1);
    pila.push(cuenta2);
    pila.push(cuenta3);

    pila.escribir();

    pila.pop();
    pila.escribir();

    pila.~Pila();
    pila.escribir();
    return 0;
}