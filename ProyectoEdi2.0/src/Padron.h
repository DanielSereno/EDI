/*
 * Padron.h
 *
 *  Created on: 19 mar. 2018
 *      Author: alumno
 */

#ifndef PADRON_H_
#define PADRON_H_

#include <string>
#include <fstream>
#include <iostream>
#include "GestorAnoNacimiento.h"
#include "GestorLugarNacimiento.h"
#include "GestorEstudios.h"
#include "GestorNacionalidades.h"


using namespace std;


class Padron{
	int codigoVia;
	GestorAnoNacimiento *anoNacimiento;
	GestorLugarNacimiento *lugarNacimiento;
	GestorEstudios *estudios;
	int numHombres;
	int numMujeres;
	GestorNacionalidades *nacionalidad;
	int anoPadron;

public:
	Padron();
	Padron(	int codigoVia, string anoNacimiento, string lugarNacimiento, string estudios,int numHombres, int numMujeres, string nacionalidad, int anoPadron);
	Padron(Padron &padron);
	~Padron();
	void setcodigoVia(int codigoVia);
	void setnumHombres(int numHombres);
	void setnumMujeres(int numMujeres);
	void setanoPadron(int anoPadron);
	void setanoNacimientoPadron(string anoNacimiento);
	void setlugarNacimientoPadron(	string lugarNacimiento);
	void setestudiosPadron(string estudios);
	void setnacionalidadPadron(	string nacionalidad);
	GestorAnoNacimiento* getAnoNacimiento();
	GestorLugarNacimiento* getLugarNacimiento();
	GestorEstudios* getEstudios();
	GestorNacionalidades* getNacionalidad();
	int getcodigoVia();
	int getnumHombres();
	int getnumMujeres();
	int getanoPadron();
	void mostrar();
	bool cargarPadron(int codigo);
	int numPersonasAno(int menor, int mayor);
};

#endif /* PADRON_H_ */
