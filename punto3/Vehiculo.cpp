#include <iostream>
#include "Vehiculo.h"

using namespace std;

Vehiculo::Vehiculo(string patente, int anioModelo, double pesoMax, double tarifa)
{
    this->patente = patente;
    this->anioModelo = anioModelo;
    this->pesoMax = pesoMax;
    this->tarifa = tarifa;
}

Vehiculo::Vehiculo()
{
}

void Vehiculo::EscribirInfo()
{
    cout << "Informacion de vehiculo" << endl;
    cout << "Patente: " << this->patente << endl;
    cout << "modelo: " << this->anioModelo << endl;
    cout << "Peso Max: " << this->pesoMax << endl;
    cout << "Tarifa: " << this->tarifa << endl;
}

double Vehiculo::GetTarifa()
{
    return this->tarifa;
}

bool Vehiculo::PesoExcedido(double peso)
{
    return this->pesoMax < peso;
}

double Vehiculo::CalcularIncremento(double peso)
{
    double montoIncremento = 0;
    if (PesoExcedido(peso))
    {
        montoIncremento = GetTarifa() * this->INCREMENTO;
    }
    return montoIncremento;
}

double Vehiculo::CalcularPrecioViaje(double peso)
{
    return GetTarifa() + CalcularIncremento(peso);
}
