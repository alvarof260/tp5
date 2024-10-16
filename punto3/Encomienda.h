#include <iostream>
#include "Fecha.h"
#include "Vehiculo.h"

#ifndef ENCOMIENDA_H
#define ENCOMIENDA_H

using namespace std;

class Encomienda
{
private:
    static int autonumerico;
    int codigoEncomienda;
    string dirOrigen;
    string dirDestino;
    Fecha fechaIngreso;
    Fecha fechaEntrega;
    bool entregado;
    double pesoEncomienda;
    Vehiculo vehiculo;

public:
    Encomienda(string dirOrigen, string dirDestino, Fecha fecha, double peso, Vehiculo vehiculo);
    void EscribirInfo();
    void SetFechaEntrega(Fecha fecha);
    Fecha GetFechaEntrega();
    int GetCodigo();
    double CalcularPrecioEncomienda();
    double GetPeso();
};
#endif