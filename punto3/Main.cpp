#include <iostream>
#include "Sistema.h"

int main()
{
    Sistema sistema = Sistema();

    Vehiculo *v1 = new Vehiculo("ABC-123", 2020, 320.50, 1500.85);
    Vehiculo *v2 = new Vehiculo("DBC-094", 2010, 250.50, 1000.50);
    Vehiculo *v3 = new Vehiculo("LXM-526", 2018, 300.00, 2500.00);

    Fecha f1 = Fecha(25, 10, 2024);
    Fecha f2 = Fecha(24, 10, 2024);
    Fecha f3 = Fecha(28, 10, 2024);

    sistema.registrarEncomienda("los sauces 800", "bolivia 2415", f1, 240.00, v3);

    sistema.registrarEncomienda("mexico 2411", "los sauces", f2, 260.00, v3);

    sistema.cargarFechaEntrega(1, f3);

    sistema.listarFechas(f3);

    return 0;
}