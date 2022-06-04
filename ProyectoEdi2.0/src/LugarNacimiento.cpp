/*
 * LugarNacimiento.cpp
 *
 *  Created on: 28 abr. 2018
 *      Author: usuario
 */

#include"LugarNacimiento.h"

lugarNacimiento:: lugarNacimiento(){
	this->poblacion="";
	this->provincia="";
	this->numPersonas=0;
}

lugarNacimiento:: lugarNacimiento(string poblacion, string provincia, int numPersonas){
	this->poblacion=poblacion;
	this->provincia=provincia;
	this->numPersonas=numPersonas;
}

lugarNacimiento:: lugarNacimiento(lugarNacimiento &lugar){
	this->poblacion= lugar.poblacion;
	this->provincia=lugar.provincia;
	this->numPersonas=lugar.numPersonas;
}

void lugarNacimiento:: setPoblacion(string poblacion){
	this->poblacion=poblacion;
}

void lugarNacimiento:: setProvincia(string provincia){
	this->provincia=provincia;
}

void lugarNacimiento:: setNumPersonas(int numPersonas){
	this->numPersonas=numPersonas;
}

string lugarNacimiento:: getPoblacion(){
	return this->poblacion;
}

string lugarNacimiento:: getProvincia(){
	return this->provincia;
}

int lugarNacimiento:: getNumPersonas(){
	return this->numPersonas;
}
void lugarNacimiento:: mostrar(){
	cout<< this->numPersonas<< " nacieron en "<< this->poblacion<<" "<< this->provincia<<endl;
}

bool lugarNacimiento:: operator >(const lugarNacimiento &LugarNacimiento){
	bool mayor=false;
	if(this->getProvincia().compare(LugarNacimiento.provincia)>0){
		mayor=true;
	}
	else{
		if(this->getProvincia().compare(LugarNacimiento.provincia)==0){
			if(this->getPoblacion().compare(LugarNacimiento.poblacion)>0){
				mayor=true;
			}
		}
	}
	return mayor;
}
