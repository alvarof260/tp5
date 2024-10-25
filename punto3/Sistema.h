#include <iostream>
#include <vector>
#include "Encomienda.h"
using namespace std;

class Sistema
{
    vector<Encomienda*> encomiendas;
public:
    Sistema();
    void registrarEncomienda(string, string, Fecha&, double, Vehiculo*);
    void cargarFechaEntrega(int, Fecha&);
    void listarFechas(Fecha&);
    ~Sistema();
};