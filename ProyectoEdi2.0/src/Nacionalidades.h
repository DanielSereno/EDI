/*
 * Nacionalidades.h
 *
 *  Created on: 1 may. 2018
 *      Author: usuario
 */

#ifndef NACIONALIDADES_H_
#define NACIONALIDADES_H_

#include <string>
#include <fstream>
#include <iostream>


using namespace std;

class Nacionalidades{
	string nacionalidad;
	int numPersonas;

public:
	Nacionalidades();
	Nacionalidades(string nacionalidad, int numPersonas);
	Nacionalidades(Nacionalidades &nacionalidad);
	void setNacionalidad(string nacionalidad);
	void setNumPersonas(int numPersonas);
	string getNacionalidad();
	int getNumPersonas();
	void mostrar();
};



#endif /* NACIONALIDADES_H_ */
