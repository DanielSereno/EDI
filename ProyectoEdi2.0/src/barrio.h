/*
 * barrio.h
 *
 *  Created on: 19 feb. 2018
 *      Author: alumno
 */

#ifndef BARRIO_H_
#define BARRIO_H_
#include <string>
#include"GestorVia.h"
#include <fstream>
#include <iostream>
using namespace std;

const int MAX=100;

class Barrio{
	string nombre;									//Atributos
	string distrito;
	GestorVia *via;
public:												//Publico
	Barrio();

	Barrio(string nombre, string distrito);

	Barrio(Barrio &b);

	~Barrio();

	void setNombreBarrio(string nombre);

	void setNombreDistrito(string distrito);

	string getNombreBarrio();

	string getnombreDistrito();

	void mostrar();

	bool operator==(const Barrio &b);

	void viasDeBarrio();

	bool buscarVia (Barrio *b);

	int numPersonasAno(int menor, int mayor);
};

#endif /* BARRIO_H_ */
