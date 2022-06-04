/*
 * GestorAnoNacimiento.cpp
 *
 *  Created on: 22 abr. 2018
 *      Author: usuario
 */


#include "GestorAnoNacimiento.h"

GestorAnoNacimiento:: GestorAnoNacimiento(){
	this->cAnos= new ListaPI<anoNacimiento*>();
}

GestorAnoNacimiento:: ~GestorAnoNacimiento(){
	delete this->cAnos;
}

void GestorAnoNacimiento:: cargarAnoNacimiento(string AnoNacimiento){
	string  a, num;
	int ano, numPersonas,i, longitud;
	vector<string> anoNacimiento1;
	vector<string> anoNacimiento2;
	anoNacimiento1=splitStringToVector(AnoNacimiento, ';');
			longitud= anoNacimiento1.size();
			for(i=0; i<longitud; i++){
				anoNacimiento2=splitString(anoNacimiento1.at(i));
				a=anoNacimiento2.at(0);
				num=anoNacimiento2.at(1);
				ano= atoi(a.c_str());
				numPersonas= atoi(num.c_str());
			    this->cAnos->insertar(new anoNacimiento(ano, numPersonas));
			    this->cAnos->avanzar();
			}
}

void GestorAnoNacimiento:: mostrar(){
	anoNacimiento *aux;
	this->cAnos->moverInicio();
	while(!this->cAnos->finLista()){
		this->cAnos->consultar(aux);
		aux->mostrar();
		this->cAnos->avanzar();
		delete aux;
	}
}

int GestorAnoNacimiento:: numPersonasAno(int menor, int mayor){
	int numPersonas=0;
	anoNacimiento *aux;
	int anio;
	this->cAnos->moverInicio();
	while(!this->cAnos->finLista()){
		this->cAnos->consultar(aux);
		anio=2016- aux->getAno();
		if(menor<=anio&&anio<=mayor){
			numPersonas=aux->getNumPersonas()+ numPersonas;
		}
		this->cAnos->avanzar();
		delete aux;
	}
	return numPersonas;
}
