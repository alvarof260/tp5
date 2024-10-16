#include <iostream>

#ifndef VEHICULO_H
#define VEHICULO_H
using namespace std;

class Vehiculo
{
private:
    string patente;
    int anioModelo;
    double pesoMax;
    float INCREMENTO = 0.25;
    double tarifa;
    bool PesoExcedido(double peso);
    double CalcularIncremento(double peso);

public:
    Vehiculo(string patente, int anioModelo, double pesoMax, double tarifa);
    Vehiculo();
    void EscribirInfo();
    double GetTarifa();
    double CalcularPrecioViaje(double peso);
};
#endif
