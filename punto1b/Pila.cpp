/*
 * Pila.cpp
 */
#include <iostream>
#include "Pila.h"

using namespace std;

Pila::Pila(int dim)
{
	MAX = dim > 0 ? dim : 10;
	tope = -1;
	arreglo = new item *[MAX];
}
void Pila ::push(item *elemento)
{
	if (tope + 1 < MAX)
	{
		tope++;
		arreglo[tope] = elemento;
	}
}

void Pila::pop()
{
	if (tope >= 0)
	{
		tope--;
	}
}

item Pila::top()
{
	if (!esPilavacia())
		return *arreglo[tope];
	else
		return indefinido;
}

bool Pila::esPilavacia()
{
	return tope == -1;
}

void Pila::escribir()
{
	cout << endl
		 << " PILA INT: (implementaci�n Pila de int)" << endl;
	for (int i = tope; i >= 0; i--)
	{
		arreglo[i]->mostrarInformacion();
	}
}

Pila::~Pila()
{
	tope = -1;
	MAX = 0;
	for (int i = this->tope; i >= 0; i--)
	{
		delete arreglo[i];
	}

	delete[] arreglo;
}
