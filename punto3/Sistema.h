#include <iostream>
#include <vector>
#include "Fecha.h"
#include "Encomienda.h"
#include "Vehiculo.h"

#ifndef SISTEMA_H
#define SISTEMA_H
using namespace std;

class Sistema
{
    vector<Encomienda *> encomiendas;

public:
    void RegistrarEncomienda(string origen, string destino, double peso, Vehiculo vehiculo);
    void CargarFechaEntrega(int codigo, Fecha fecha);
    void ListarEntregas(Fecha fecha);
    ~Sistema();
};

#endif
