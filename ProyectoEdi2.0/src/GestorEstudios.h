/*
 * GestorEstudios.h
 *
 *  Created on: 1 may. 2018
 *      Author: usuario
 */

#ifndef GESTORESTUDIOS_H_
#define GESTORESTUDIOS_H_

#include "Estudios.h"
#include"Utils.h"
#include"listapi.h"

class GestorEstudios{
	ListaPI<Estudios*>*estudios;

public:
	GestorEstudios();
	~GestorEstudios();
	void cargarEstudios(string estudios);
	void mostrar();
};


#endif /* GESTORESTUDIOS_H_ */
