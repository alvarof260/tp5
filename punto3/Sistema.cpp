#include <iostream>
#include <vector>
#include "Fecha.h"
#include "Encomienda.h"
#include "Vehiculo.h"
#include "Sistema.h"

using namespace std;

void Sistema::RegistrarEncomienda(string origen, string destino, double peso, Vehiculo vehiculo)
{
    Fecha fecha;
    fecha.setFechaActual();
    Encomienda *nuevaEncomienda = new Encomienda(origen, destino, fecha, peso, vehiculo);
    this->encomiendas.push_back(nuevaEncomienda);
}

void Sistema::CargarFechaEntrega(int codigo, Fecha fecha)
{
    for (Encomienda *e : this->encomiendas)
    {
        if (e->GetCodigo() == codigo)
        {
            e->SetFechaEntrega(fecha);
            break;
        }
    }
}

void Sistema::ListarEntregas(Fecha fecha)
{
    double recaudacion = 0;
    for (Encomienda *encomienda : encomiendas)
    {
        if (((encomienda->GetFechaEntrega().getAnio()) == fecha.getAnio()) && (encomienda->GetFechaEntrega().getMes() == fecha.getMes()) && (encomienda->GetFechaEntrega().getDia() == fecha.getDia()))
        {
            encomienda->EscribirInfo();
            recaudacion += encomienda->CalcularPrecioEncomienda();
        }
    }
    cout << "recaudacion: " << recaudacion << endl;
}

Sistema::~Sistema()
{
    for (Encomienda *encomienda : encomiendas)
    {
        delete encomienda; // Libera la memoria de cada Encomienda
    }
    encomiendas.clear(); // Limpia el vector
}