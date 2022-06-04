/*
 * GestorNacionalidades.h
 *
 *  Created on: 1 may. 2018
 *      Author: usuario
 */

#ifndef GESTORNACIONALIDADES_H_
#define GESTORNACIONALIDADES_H_

#include "Nacionalidades.h"
#include"Utils.h"
#include"listapi.h"

class GestorNacionalidades{
	ListaPI<Nacionalidades*>*nacionalidad;

public:
	GestorNacionalidades();
	~GestorNacionalidades();
	void cargarNacionalidades(string nacionalidad);
	void mostrar();
};



#endif /* GESTORNACIONALIDADES_H_ */
