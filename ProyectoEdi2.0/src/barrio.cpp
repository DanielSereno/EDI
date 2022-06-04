/*
 * barrio.cpp
 *
 *  Created on: 19 feb. 2018
 *      Author: alumno
 */


#include "barrio.h"



Barrio::Barrio(){
	this->nombre = "";
	this->distrito = "";
	this->via=NULL;
}

Barrio::Barrio(string nombre, string distrito){
	this->nombre=nombre;
	this->distrito=distrito;
	this->via= new GestorVia();
	this->via->cargarVia(nombre);
}

Barrio::Barrio(Barrio &b){
	this->nombre=b.nombre;
	this->distrito=b.distrito;
	this->via=b.via;
}

Barrio:: ~Barrio(){
	this->via->~GestorVia();
}

void Barrio::setNombreBarrio(string nombre){
	this -> nombre=nombre;
}

void Barrio::setNombreDistrito(string distrito){
	this -> distrito=distrito;
}

string Barrio::getNombreBarrio(){
	return this->nombre;
}

string Barrio::getnombreDistrito(){
	return this->distrito;
}

bool Barrio:: operator==(const Barrio &b){
	bool igual;
	igual=true;
	if(this-> nombre!=b.nombre|| this->distrito!=b.distrito){
		igual=false;
	}
	return igual;
}

void Barrio::mostrar(){
	cout<<"El barrio es "<< this->nombre <<" y esta en el distrito "<<this->distrito<<"."<<endl;
	this->via->mostrar();
}

bool Barrio::buscarVia (Barrio *b){
	Via *aux=new Via();
	int i=0;
	bool encontrado=false, fin=false;
	while(!fin&&!encontrado){
		fin=this->via->devolverVia(i,*aux);
		encontrado=b->via->buscarVia(*aux);
		i++;
	}
    aux->~Via();
	return encontrado;
}

int Barrio:: numPersonasAno(int menor, int mayor){
	return this->via->numPersonasAno(menor, mayor);
}
