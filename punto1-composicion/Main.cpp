#include <iostream>
#include "Pila.h"

int main()
{
    Pila pila(3);

    Cuenta *cuenta1 = new Cuenta(20, 45185152, 25000.0);
    Cuenta *cuenta2 = new Cuenta(30, 45121105, 50000.0);
    Cuenta *cuenta3 = new Cuenta(40, 42145124, 45000.0);

    pila.push(cuenta1);
    pila.push(cuenta2);
    pila.push(cuenta3);

    pila.escribir();

    pila.pop();
    pila.escribir();

    pila.~Pila();
    cuenta3->mostrarInformacion();
}