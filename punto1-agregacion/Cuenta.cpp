#include <iostream>
#include "Cuenta.h"
using namespace std;

Cuenta::Cuenta(int numero, long int dniTitular, double saldo)
{
    this->numero = numero;
    this->dniTitular = dniTitular;
    this->saldo = (saldo >= 0) ? saldo : 0;
}

bool Cuenta::depositar(double monto)
{
    if (monto < 0)
        return false;

    this->saldo += monto;
    return true;
}

bool Cuenta::extraer(double monto)
{
    if (monto <= 0)
        return false;

    if (this->saldo < monto)
        return false;

    this->saldo -= monto;
    return true;
}

double Cuenta::getSaldo()
{
    return this->saldo;
}

void Cuenta::mostrarInformacion()
{
    cout << "Informacion de cuenta:" << endl;
    cout << "Numero:" << this->numero << endl;
    cout << "DNI:" << this->dniTitular << endl;
    cout << "Saldo:" << this->saldo << endl;
}
