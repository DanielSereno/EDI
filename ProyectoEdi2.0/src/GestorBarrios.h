/*
 * GestorBarrios.h
 *
 *  Created on: 17 abr. 2018
 *      Author: usuario
 */

#ifndef GESTORBARRIOS_H_
#define GESTORBARRIOS_H_

#include"barrio.h"
#include"pila.h"

class GestorBarrios{
	ListaPI<Barrio*> *barrio;


public:

	GestorBarrios();

	~GestorBarrios();

	void cargarBarrios();

	void mostrar();

	void mostrarViasBarrio(string nombre);

	void mostrarViasVariosBarrios();

	int numPersonasAno(int menor, int mayor);
};

#endif /* GESTORBARRIOS_H_ */
