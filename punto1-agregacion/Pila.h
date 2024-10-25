/*
 * Pila.h
 */

#ifndef PILA_H_
#define PILA_H_
#include <iostream>
#include "Cuenta.h"

using namespace std;
typedef Cuenta* item;
const item indefinido = nullptr;

class Pila

{
	int tope;
	item *arreglo;
	int MAX;
	item *reservarMemoria(int size);

public:
	Pila(int dim = 10);
	void push(item elemento);
	item top();
	void pop();
	bool esPilavacia();
	void escribir();

	~Pila();
};

#endif // PILA_H_
