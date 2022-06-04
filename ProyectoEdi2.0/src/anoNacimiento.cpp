/*
 * anoNacimiento.cpp
 *
 *  Created on: 22 abr. 2018
 *      Author: usuario
 */

#include "anoNacimiento.h"


anoNacimiento:: anoNacimiento(){
	this->ano=0;
	this->numPersonas=0;
}

anoNacimiento:: anoNacimiento(int ano, int numPersonas){
	this->ano=ano;
	this->numPersonas=numPersonas;
}
anoNacimiento::  anoNacimiento(anoNacimiento &nacimiento){
	this->ano=nacimiento.ano;
	this->numPersonas=nacimiento.numPersonas;
}
void anoNacimiento:: setAno(int ano){
	this->ano= ano;
}

void anoNacimiento:: setNumPersonas(int numPersonas){
	this->numPersonas=numPersonas;
}

int anoNacimiento:: getAno(){
	return this->ano;
}

int anoNacimiento:: getNumPersonas(){
	return this->numPersonas;
}

void anoNacimiento:: mostrar(){
	cout<< "El numero de personas nacidas en "<< this->ano<< " es: "<< this->numPersonas<< endl;
}
