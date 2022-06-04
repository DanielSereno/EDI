/*
 * LugarNacimiento.h
 *
 *  Created on: 28 abr. 2018
 *      Author: usuario
 */

#ifndef LUGARNACIMIENTO_H_
#define LUGARNACIMIENTO_H_

#include <string>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

class lugarNacimiento{
	string poblacion;
	string provincia;
	int numPersonas;

public:
	lugarNacimiento();
	lugarNacimiento(string poblacion, string provincia, int numPersonas);
	lugarNacimiento(lugarNacimiento &lugar);
	void setPoblacion(string poblacion);
	void setProvincia(string provincia);
	void setNumPersonas(int numPersonas);
	string getPoblacion();
	string getProvincia();
	int getNumPersonas();
	void mostrar();
	bool operator >(const lugarNacimiento &LugarNacimiento);

};

#endif /* LUGARNACIMIENTO_H_ */
