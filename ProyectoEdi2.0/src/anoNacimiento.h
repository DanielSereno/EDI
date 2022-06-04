/*
 * anoNacimiento.h
 *
 *  Created on: 19 mar. 2018
 *      Author: alumno
 */

#ifndef ANONACIMIENTO_H_
#define ANONACIMIENTO_H_

#include <string>
#include <fstream>
#include <iostream>


using namespace std;

class anoNacimiento{
	int ano;
	int numPersonas;

public:
	anoNacimiento();
	anoNacimiento(int ano, int numPersonas);
	anoNacimiento(anoNacimiento &nacimiento);
	void setAno(int ano);
	void setNumPersonas(int numPersonas);
	int getAno();
	int getNumPersonas();
	void mostrar();
};

#endif /* ANONACIMIENTO_H_ */
