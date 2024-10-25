#include <iostream>
#include "Vehiculo.h"
using namespace std;

float Vehiculo::INCREMENTO = 0.25; 

Vehiculo::Vehiculo(string patente, int anioModelo,
                   double pesoMax, double tarifa)
{
    this->patente = patente;
    this->anioModelo = anioModelo;
    this->pesoMax = pesoMax;
    this->tarifa = tarifa;
}

void Vehiculo::escribirInfo()
{
    cout << "Informacion del vehículo con patente: " << this->patente << endl;
    cout << "anio del modelo: " << this->anioModelo << endl;
    cout << "peso máximo: " << this->pesoMax << endl;
    cout << "tarifa: $" << this->tarifa << endl;
}

bool Vehiculo::pesoExcedido(double peso)
{
    return this->pesoMax < peso;
}

double Vehiculo::getTarifa()
{
    return this->tarifa;
}

double Vehiculo::calcularIncremento(double peso)
{
    double montoIncremento = 0;
    if (pesoExcedido(peso))
        montoIncremento = getTarifa() * this->INCREMENTO;

    return montoIncremento;
}

double Vehiculo::calcularPrecioViaje(double peso)
{
    return getTarifa() + calcularIncremento(peso);
}