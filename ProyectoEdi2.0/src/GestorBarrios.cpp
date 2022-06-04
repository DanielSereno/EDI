/*
 * GestorBarrios.cpp
 *
 *  Created on: 17 abr. 2018
 *      Author: usuario
 */

#include"GestorBarrios.h"

GestorBarrios:: GestorBarrios(){
	this->barrio=new ListaPI<Barrio*>();
}

GestorBarrios:: ~GestorBarrios(){
	delete this->barrio;
}


void GestorBarrios:: mostrar(){
	Barrio *aux;
	this->barrio->moverInicio();
	while(!this->barrio->finLista()){
		this->barrio->consultar(aux);
		aux->mostrar();
		this->barrio->avanzar();
		aux->~Barrio();
	}
}

void GestorBarrios:: cargarBarrios(){
	string nombre, distrito;
	ifstream fent;
	fent.open("Barrio.csv");
	string linea;
	if(fent.is_open()){
		getline(fent,linea);
		while(!fent.eof()){
			getline(fent,nombre,'#');
				if(!fent.eof()){
					getline(fent,distrito);
					this->barrio->insertar(new Barrio(nombre, distrito));
					this->barrio->avanzar();
				}
		}
		fent.close();
	}
	else{
		cout<<"Error al abrir Barrio.csv"<<endl;
	}
}

void GestorBarrios:: mostrarViasBarrio(string nombre){
	Barrio *aux;
	this->barrio->moverInicio();
	while(!this->barrio->finLista()){
		this->barrio->consultar(aux);
		if(nombre==aux->getNombreBarrio())
			aux->mostrar();
		this->barrio->avanzar();
		aux->~Barrio();
	}
}

void GestorBarrios:: mostrarViasVariosBarrios(){
	Barrio *aux1,*aux2;
	this->barrio->moverInicio();
	this->barrio->consultar(aux1);
	while(!this->barrio->finLista()){
		this->barrio->avanzar();
		this->barrio->consultar(aux2);
		if(aux2->buscarVia(aux1)){
			aux1->mostrar();
		}
		aux2->~Barrio();
	}
	aux1->~Barrio();
}

int GestorBarrios:: numPersonasAno(int menor, int mayor){
	int numPersonas=0;
	Barrio *aux;
	this->barrio->moverInicio();
	while(!this->barrio->finLista()){
		this->barrio->consultar(aux);
		numPersonas=numPersonas+aux->numPersonasAno(menor, mayor);
		this->barrio->avanzar();
		aux->~Barrio();
	}
	return numPersonas;
}
