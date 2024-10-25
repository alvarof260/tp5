#include <iostream>
#include "Fecha.h"
#include "Vehiculo.h"
using namespace std;

class Encomienda
{
    static int autonumerico;
    int codigoEncomienda;
    string dirOrigen;
    string dirDestino;
    Fecha &fechaIngreso;
    Fecha fechaEntrega;
    bool entregado;
    double pesoEncomienda;
    Vehiculo *vehiculo;

public:
    Encomienda(string dirOrigen, string dirDestino, Fecha &fechaIngreso , double pesoEncomienda, Vehiculo *vehiculo);
    void escribirInfo();
    void setFechaEntrega(Fecha &fecha);
    Fecha getFechaEntrega();
    int getCodigo();
    double calcularPrecioEncomienda();
    double getPeso();
    ~Encomienda();
};