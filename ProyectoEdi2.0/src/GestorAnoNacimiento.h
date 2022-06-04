/*
 * GestorAnoNacimiento.h
 *
 *  Created on: 19 mar. 2018
 *      Author: alumno
 */

#ifndef GESTORANONACIMIENTO_H_
#define GESTORANONACIMIENTO_H_

#include <string>
#include <fstream>
#include <iostream>
#include"listapi.h"
#include "anoNacimiento.h"
#include <cstdlib>
#include"Utils.h"
#include <vector>


using namespace std;

class GestorAnoNacimiento{
	ListaPI<anoNacimiento*> *cAnos;


public:
	GestorAnoNacimiento();
	~GestorAnoNacimiento();
	void cargarAnoNacimiento(string AnoNacimiento);
	void mostrar();
	int numPersonasAno(int menor, int mayor);
};

#endif /* GESTORANONACIMIENTO_H_ */
