#include <iostream>
#include "Encomienda.h"
#include "Fecha.h"

using namespace std;

int Encomienda::autonumerico = 0;

Encomienda::Encomienda(string dirOrigen, string dirDestino, Fecha fecha, double peso, Vehiculo vehiculo)
{
    Fecha fechaDefault = Fecha();
    this->autonumerico++;
    this->codigoEncomienda = autonumerico;
    this->dirOrigen = dirOrigen;
    this->dirDestino = dirDestino;
    this->fechaIngreso = fecha;
    this->fechaEntrega = fechaDefault;
    this->entregado = false;
    this->pesoEncomienda = peso;
    this->vehiculo = vehiculo;
}

void Encomienda::EscribirInfo()
{
    cout << "Informacion Encomienda:" << endl;
    cout << "Codigo: " << this->codigoEncomienda << endl;
    cout << "Direccion origen: " << this->dirOrigen << endl;
    cout << "Direccion destino: " << this->dirDestino << endl;
    cout << "Fecha ingreso: " << this->fechaIngreso.toString() << endl;
    cout << "Fecha entrega: " << this->fechaEntrega.toString() << endl;
    cout << "Entregado: " << this->entregado << endl;
    cout << "Peso: " << this->pesoEncomienda << endl;
    cout << "Vehiculo: " << endl;
    this->vehiculo.EscribirInfo();
}
void Encomienda::SetFechaEntrega(Fecha fecha)
{
    this->fechaEntrega = fecha;
    this->entregado = true;
}

double Encomienda::GetPeso()
{
    return this->pesoEncomienda;
}

int Encomienda::GetCodigo()
{
    return this->codigoEncomienda;
}

Fecha Encomienda::GetFechaEntrega()
{
    return this->fechaEntrega;
}

double Encomienda::CalcularPrecioEncomienda()
{
    double peso = GetPeso();
    double precio = this->vehiculo.CalcularPrecioViaje(peso);
    return precio;
}
