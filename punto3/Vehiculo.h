#include <iostream>

using namespace std;

class Vehiculo
{
    string patente;
    int anioModelo;
    double pesoMax;
    static float INCREMENTO;
    double tarifa;
    bool pesoExcedido(double peso);
    double calcularIncremento(double peso);

public:
    Vehiculo(string patente, int anioModelo, double pesoMax, double tarifa);
    void escribirInfo();
    double getTarifa();
    double calcularPrecioViaje(double peso);
    ~Vehiculo();
};
