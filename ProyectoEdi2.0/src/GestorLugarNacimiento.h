/*
 * GestorLugarNacimiento.h
 *
 *  Created on: 28 abr. 2018
 *      Author: usuario
 */

#ifndef GESTORLUGARNACIMIENTO_H_
#define GESTORLUGARNACIMIENTO_H_

#include"LugarNacimiento.h"
#include"Utils.h"
#include"listapi.h"

class GestorLugarNacimiento{
	ListaPI<lugarNacimiento*>*LugarNacimiento;

public:
	GestorLugarNacimiento();
	~GestorLugarNacimiento();
	void cargarLugarNacimiento(string LugarNacimiento);
	void mostrar();
	int numVecinos(string provincia);
	void insertarEnOrden();
};

#endif /* GESTORLUGARNACIMIENTO_H_ */
