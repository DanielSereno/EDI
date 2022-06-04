/*
 * GestorVia.h
 *
 *  Created on: 3 may. 2018
 *      Author: usuario
 */

#ifndef GESTORVIA_H_
#define GESTORVIA_H_

#include "via.h"
#include "arbol.h"

class GestorVia{
	Arbol<Via*,comparadorVias>*via;
	void mostrarInOrden(Arbol<Via*,comparadorVias> *via);
	Via buscarViaPreOrden(string nombre, Arbol<Via*,comparadorVias> *via);

public:
	GestorVia();
	~GestorVia();
	void cargarVia(string lugar);
	void mostrar();
	Via buscarVia (string nombre);
	bool devolverVia(int i, Via &aux);
	int numPersonasAno(int menor, int mayor);
	void mostarViasSubCadena(string subCadena);
};

#endif /* GESTORVIA_H_ */
