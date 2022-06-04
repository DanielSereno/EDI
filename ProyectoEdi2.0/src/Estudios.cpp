/*
 * Estudios.cpp
 *
 *  Created on: 1 may. 2018
 *      Author: usuario
 */
#include "Estudios.h"

Estudios:: Estudios(){
	this->estudios="";
	this->numPersonas=0;
}

Estudios:: Estudios(string estudios, int numPersonas){
	this->estudios=estudios;
	this->numPersonas=numPersonas;
}

Estudios:: Estudios(Estudios &estudios){
	this->estudios=estudios.estudios;
	this->numPersonas=estudios.numPersonas;
}

void Estudios:: setEstudios(string estudios){
	this->estudios=estudios;
}

void Estudios:: setNumPersonas(int numPersonas){
	this->numPersonas=numPersonas;
}

string Estudios:: getEstudios(){
	return this->estudios;
}

int Estudios:: getNumPersonas(){
	return this->numPersonas;
}

void Estudios:: mostrar(){
	cout<< this->numPersonas<< " tiene los estudios: "<< this->estudios<< endl;
}
