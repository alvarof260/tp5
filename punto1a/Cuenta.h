#include <iostream>
using namespace std;

class Cuenta
{
    int numero;
    long int dniTitular;
    double saldo;

public:
    Cuenta(int numero = 0, long int dniTitular = 0, double saldo = 0.0);
    bool depositar(double monto);
    bool extraer(double monto);
    double getSaldo();
    void mostrarInformacion();
};
