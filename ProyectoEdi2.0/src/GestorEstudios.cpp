/*
 * GestorEstudios.cpp
 *
 *  Created on: 1 may. 2018
 *      Author: usuario
 */

#include "GestorEstudios.h"


GestorEstudios:: GestorEstudios(){
	this->estudios=new ListaPI<Estudios*>();
}

GestorEstudios:: ~GestorEstudios(){
	delete this->estudios;
}

void GestorEstudios:: cargarEstudios(string estudios){
	string  estudios2, num;
	int  numPersonas,i, longitud;
	vector<string> vestudios1;
	vector<string> vestudios2;
	vestudios1=splitStringToVector(estudios, ';');
	longitud= vestudios1.size();
	for(i=0; i<longitud; i++){
		vestudios2=splitString(vestudios1.at(i));
		estudios2=vestudios2.at(0);
	    num=vestudios2.at(1);
		numPersonas= atoi(num.c_str());
	   this->estudios->insertar(new Estudios (estudios2, numPersonas));
	   this->estudios->avanzar();
	}
}

void GestorEstudios:: mostrar(){
	Estudios *aux;
	this->estudios->moverInicio();
	while(!this->estudios->finLista()){
		this->estudios->consultar(aux);
		aux->mostrar();
		this->estudios->avanzar();
		delete aux;

	}
}
