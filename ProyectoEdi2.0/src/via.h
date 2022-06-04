/*
 * via.h
 *
 *  Created on: 26 feb. 2018
 *      Author: alumno
 */

#ifndef VIA_H_
#define VIA_H_

#include <iostream>
#include "Padron.h"
using namespace std;


class Via{
	string lugar, nombre, tipo;
	int codigo;
	float longitud;
	Padron *padron;
	bool tienePadron;

public:
	Via();

	Via(string lugar, string nombre, string tipo, float longitud, int codigo);

	Via(Via &v);

	~Via();

	void setLugarVia (string lugar);

	void setNombreVia (string nombre);

	void setTipoVia (string tipo);

	void setLongitudVia (float longitud);

	void setCodigoVia (int codigo);

	string getLugarVia ();

	string getNombreVia ();

	string getTipoVia ();

	float getLongitudVia ();

	int getCodigoVia ();

	bool getTienePatron();

	void mostrar();

	bool operator==(const Via &v);

	bool operator>(const Via &v);

	void cargarPadron(int codigo);

	int numPersonasAno(int menor, int mayor);

};

class comparadorVias{
public:
	int operator() (const Via *v1, const Via *v2);
};

#endif /* VIA_H_ */
