#include <iostream>
#include "Encomienda.h"
using namespace std;

int Encomienda::autonumerico = 0;

Encomienda::Encomienda(string dirOrigen, string dirDestino, Fecha &fechaIngreso, Fecha &fechaEntrega,
                       bool entregado, double pesoEncomienda, Vehiculo *vehiculo) : fechaIngreso(fechaIngreso), fechaEntrega(fechaEntrega)
{
    this->codigoEncomienda = ++Encomienda::autonumerico;
    this->dirOrigen = dirOrigen;
    this->dirDestino = dirDestino;
    this->entregado = entregado;
    this->pesoEncomienda = pesoEncomienda;
    this->vehiculo = vehiculo;
}

void Encomienda::escribirInfo()
{
    cout << "Informacion de la encomienda " << this->codigoEncomienda << endl;
    cout << "direccion origen: " << this->dirOrigen << endl;
    cout << "direccion destino: " << this->dirDestino << endl;
    cout << "fecha ingreso: " << this->fechaIngreso.toString() << endl;
    cout << "fecha entrega: " << this->fechaEntrega.toString() << endl;
    cout << "peso: " << this->pesoEncomienda << endl;

    this->vehiculo->escribirInfo();
}

void Encomienda::setFechaEntrega(Fecha fecha)
{
    this->fechaEntrega = fecha;
    this->entregado = true;
}

Fecha Encomienda::getFechaEntrega()
{
    return this->fechaEntrega;
}

int Encomienda::getCodigo()
{
    return this->codigoEncomienda;
}

double Encomienda::calcularPrecioEncomienda()
{
    double peso = getPeso();
    double precio = this->vehiculo->calcularPrecioViaje(peso);
    return precio;
}
