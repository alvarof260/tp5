/*
 * Pila.cpp
 */
#include <iostream>
#include "Pila.h"

using namespace std;

item *Pila::reservarMemoria(int size)
{
	item *reserva = new item[size];
	if (reserva == NULL)
	{
		cout << "Problema: no se pudo realizar la reserva";
	}
	return reserva;
}

Pila::Pila(int dim)
{
	this->MAX = dim > 0 ? dim : 10;
	this->tope = -1;
	this->arreglo = reservarMemoria(dim);
}
void Pila::push(int cod, long int dni, double saldo)
{
	if (tope + 1 < MAX)
	{
		tope++;
		this->arreglo[tope] = new Cuenta(cod, dni, saldo);
	}
}

void Pila::pop()
{
	if (tope >= 0)
	{
		delete arreglo[tope];
		tope--;
	}
}

item Pila::top()
{
	if (!esPilavacia())
		return arreglo[tope];
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
		 << " PILA INT: (implementación Pila de int)" << endl;
	for (int i = tope; i >= 0; i--)
	{
		arreglo[i]->mostrarInformacion();
	}
}

Pila::~Pila()
{
	while (!esPilavacia())
	{
		this->pop();
	}

	delete[] arreglo;
}
