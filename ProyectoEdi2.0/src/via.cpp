/*
 * via.cpp
 *
 *  Created on: 26 feb. 2018
 *      Author: alumno
 */


#include "via.h"

Via::Via(){
	this->lugar== "";
	this->nombre== "";
	this->tipo== "";
	this->longitud= 0;
	this->codigo= 0;
	this->padron=NULL;
	tienePadron= false;
}

Via:: Via(string lugar, string nombre, string tipo, float longitud, int codigo){
	this->lugar= lugar;
	this->nombre= nombre;
	this->tipo= tipo;
	this->longitud= longitud;
	this->codigo= codigo;
	this->padron=new Padron();
	this->tienePadron=this->padron->cargarPadron(codigo);
}

Via::Via(Via &v){
	this->lugar=v.lugar;
	this->nombre=v.nombre;
	this->tipo=v.tipo;
	this->longitud=v.longitud;
	this->codigo=v.codigo;
	this->padron=v.padron;
	this->tienePadron=v.tienePadron;
}

Via:: ~Via(){
	if(this->tienePadron){
		this->padron->~Padron();
	}
}

void Via:: setLugarVia (string lugar){
	this -> lugar= lugar;
}

void Via:: setNombreVia (string nombre){
	this -> nombre= nombre;
}

void Via:: setTipoVia (string tipo){
	this -> tipo= tipo;
}

void Via:: setLongitudVia (float longitud){
	this -> longitud= longitud;
}

void Via:: setCodigoVia (int codigo){
	this -> codigo= codigo;
}

string Via:: getLugarVia (){
	return this->lugar;
}

string Via:: getNombreVia (){
	return this->nombre;
}

string Via:: getTipoVia (){
	return this->tipo;
}

float Via:: getLongitudVia (){
	return this->longitud;
}

int Via:: getCodigoVia (){
	return this->codigo;
}

bool Via::getTienePatron(){
	return this->tienePadron;
}

void Via:: mostrar(){
	cout << "La via es "<< this->nombre<< " está en "<< this->lugar<<" es una "<< this->tipo<<" de longitud "<<this->longitud<<" y su código es "<< this->codigo<< endl;
	if(this->tienePadron)
		this->padron->mostrar();
	else
		cout<< "Esta via no tiene Padron"<<endl;
}

bool Via:: operator==(const Via &v){
	if(this-> nombre==v.nombre&&this->tipo==v.tipo&& this->longitud==v.longitud&& this->codigo==v.codigo){
		return true;
	}
	else
		return false;
}

bool Via:: operator>(const Via &v){
	bool mayor;
	mayor=false;
	if( this->longitud>v.longitud){
		mayor= true;
	}
	return mayor;
}

int Via:: numPersonasAno(int menor, int mayor){
	if(this->tienePadron)
		return this->padron->numPersonasAno(menor,mayor);
	else
		return 0;
}

int comparadorVias:: operator() (const Via *v1, const Via *v2){
	int iguales;
	if(*v1==*v2)
		iguales=0;
	if(*v1>*v2)
		iguales=1;
	else
		iguales=-1;
	return iguales;
}
