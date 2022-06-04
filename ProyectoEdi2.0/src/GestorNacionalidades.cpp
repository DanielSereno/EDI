/*
 * GestorNacionalidades.cpp
 *
 *  Created on: 1 may. 2018
 *      Author: usuario
 */

#include "GestorNacionalidades.h"


GestorNacionalidades:: GestorNacionalidades(){
	this->nacionalidad=new ListaPI<Nacionalidades*>();
}

GestorNacionalidades:: ~GestorNacionalidades(){
	delete this->nacionalidad;
}

void GestorNacionalidades:: cargarNacionalidades(string nacionalidad){
	string  nacionalidad2, num;
	int  numPersonas,i, longitud;
	vector<string> vnacionalidad1;
	vector<string> vnacionalidad2;
	vnacionalidad1=splitStringToVector(nacionalidad, ';');
	longitud= vnacionalidad1.size();
	for(i=0; i<longitud; i++){
		vnacionalidad2=splitString(vnacionalidad1.at(i));
		nacionalidad2=vnacionalidad2.at(0);
	    num=vnacionalidad2.at(1);
		numPersonas= atoi(num.c_str());
	   this->nacionalidad->insertar(new Nacionalidades (nacionalidad2, numPersonas));
	   this->nacionalidad->avanzar();
	}
}

void GestorNacionalidades:: mostrar(){
	Nacionalidades *aux;
	this->nacionalidad->moverInicio();
	while(!this->nacionalidad->finLista()){
		this->nacionalidad->consultar(aux);
		aux->mostrar();
		this->nacionalidad->avanzar();
		delete aux;
	}
}


