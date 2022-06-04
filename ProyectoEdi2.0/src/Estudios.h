/*
 * Estudios.h
 *
 *  Created on: 1 may. 2018
 *      Author: usuario
 */

#ifndef ESTUDIOS_H_
#define ESTUDIOS_H_

#include <string>
#include <fstream>
#include <iostream>


using namespace std;

class Estudios{
	string estudios;
	int numPersonas;

public:
	Estudios();
	Estudios(string estudios, int numPersonas);
	Estudios(Estudios &estudios);
	void setEstudios(string estudios);
	void setNumPersonas(int numPersonas);
	string getEstudios();
	int getNumPersonas();
	void mostrar();
};



#endif /* ESTUDIOS_H_ */
