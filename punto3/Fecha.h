#include <iostream>

#ifndef FECHA_H
#define FECHA_H
using namespace std;

class Fecha
{
    short dia;
    short mes;
    short anio;
    bool esDiaValido() const;
    bool esMesValido() const;
    bool esAnioValido() const;
    short diasEnMes(const short mes) const;

public:
    // Constructores
    Fecha();
    Fecha(const short d, const short m, const short a);
    Fecha(const Fecha &f);
    // Setters
    void setFechaActual(void);
    void setFecha(const short d, const short m, const short a);
    // Getters
    short getDia() const;
    short getMes() const;
    short getAnio() const;
    // Test anio bisiesto
    bool esAnioBisiesto(void) const;
    // Operacion que transforma una fecha a string
    string toString();
};
// Sobrecarga del operador - como funci�n
// externa de la clase Fecha
int operator-(Fecha fecha1, Fecha fecha2);
#endif // FECHA_H