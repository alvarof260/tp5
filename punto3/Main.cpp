#include <iostream>
#include "Sistema.h"

using namespace std;

int main()
{
    Sistema sistema;

    Vehiculo vehiculo1("ABC-453", 2020, 250.50, 160.00);
    Vehiculo vehiculo2("AZP-246", 2019, 300.00, 140.00);
    Vehiculo vehiculo3("PBX-209", 2008, 450.50, 80.00);

    sistema.RegistrarEncomienda("Bolivia 2485", "Los sauces 800", 150.00, vehiculo2);
    sistema.RegistrarEncomienda("Paraguay 4215", "Los sauces 600", 200.00, vehiculo1);
    sistema.RegistrarEncomienda("Espania 2415", "Los sauces 200", 260.00, vehiculo1);
    sistema.RegistrarEncomienda("Peru 4617", "Los sauces 500", 400.00, vehiculo3);

    sistema.CargarFechaEntrega(1, Fecha(17, 10, 2024));
    sistema.CargarFechaEntrega(3, Fecha(17, 10, 2024));
    sistema.CargarFechaEntrega(2, Fecha(18, 10, 2024));
    sistema.CargarFechaEntrega(4, Fecha(19, 10, 2024));

    sistema.ListarEntregas(Fecha(17, 10, 2024));

    sistema.~Sistema();

    vehiculo2.EscribirInfo();

    return 0;
}