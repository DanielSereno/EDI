/*
 * Nacionalidades.cpp
 *
 *  Created on: 1 may. 2018
 *      Author: usuario
 */


#include "Nacionalidades.h"

Nacionalidades:: Nacionalidades(){
	this->nacionalidad="";
	this->numPersonas=0;
}

Nacionalidades:: Nacionalidades(string estudios, int numPersonas){
	this->nacionalidad=estudios;
	this->numPersonas=numPersonas;
}

Nacionalidades:: Nacionalidades(Nacionalidades &nacionalidad){
	this->nacionalidad=nacionalidad.nacionalidad;
	this->numPersonas=nacionalidad.numPersonas;
}

void Nacionalidades:: setNacionalidad(string estudios){
	this->nacionalidad=estudios;
}

void Nacionalidades:: setNumPersonas(int numPersonas){
	this->numPersonas=numPersonas;
}

string Nacionalidades:: getNacionalidad(){
	return this->nacionalidad;
}

int Nacionalidades:: getNumPersonas(){
	return this->numPersonas;
}

void Nacionalidades:: mostrar(){
	cout<< this->numPersonas<< " vecinos son de: "<< this->nacionalidad<< endl;
}


