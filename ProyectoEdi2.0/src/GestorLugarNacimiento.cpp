/*
 * GestorLugarNacimiento.cpp
 *
 *  Created on: 28 abr. 2018
 *      Author: usuario
 */

#include"GestorLugarNacimiento.h"



GestorLugarNacimiento:: GestorLugarNacimiento(){
	this->LugarNacimiento=new ListaPI<lugarNacimiento*>();
}

GestorLugarNacimiento:: ~GestorLugarNacimiento(){
	delete this->LugarNacimiento;
}

void GestorLugarNacimiento:: cargarLugarNacimiento(string LugarNacimiento){
	string  poblacion, provincia, num;
	int  numPersonas,i, longitud;
	vector<string> LugarNacimiento1;
	vector<string> LugarNacimiento2;
	LugarNacimiento1=splitStringToVector(LugarNacimiento, ';');
	longitud= LugarNacimiento1.size();
	for(i=0; i<longitud; i++){
		LugarNacimiento2=splitString(LugarNacimiento1.at(i));
		if(LugarNacimiento2.size()==2){
			poblacion=LugarNacimiento2.at(0);
			provincia="";
			num=LugarNacimiento2.at(1);
		}
		if(LugarNacimiento2.size()==3){
			poblacion=LugarNacimiento2.at(0);
			provincia=LugarNacimiento2.at(1);
			num=LugarNacimiento2.at(2);
		}
		numPersonas= atoi(num.c_str());
	   this->LugarNacimiento->insertar(new lugarNacimiento(poblacion, provincia, numPersonas));
	   this->LugarNacimiento->avanzar();
	}
}

void GestorLugarNacimiento:: mostrar(){
	lugarNacimiento *aux;
	this->LugarNacimiento->moverInicio();
	while(!this->LugarNacimiento->finLista()){
		this->LugarNacimiento->consultar(aux);
		aux->mostrar();
		this->LugarNacimiento->avanzar();
		delete aux;
	}
}

int GestorLugarNacimiento:: numVecinos(string provincia){
	int numVecinos=0;
	lugarNacimiento *aux;
	this->LugarNacimiento->moverInicio();
	while(!this->LugarNacimiento->finLista()){
		this->LugarNacimiento->consultar(aux);
		if(aux->getProvincia()==provincia){
				numVecinos=numVecinos+aux->getNumPersonas();
		}
		delete aux;
		this->LugarNacimiento->avanzar();
	}
	return numVecinos;
}

void GestorLugarNacimiento:: insertarEnOrden(){
	lugarNacimiento *aux1, *aux2;
	ListaPI<lugarNacimiento*>*LugarNacimiento=new ListaPI<lugarNacimiento*>();
	this->LugarNacimiento->moverInicio();
	while(!this->LugarNacimiento->estaVacia()){
		if(LugarNacimiento->estaVacia()){
			this->LugarNacimiento->consultar(aux1);
			if(aux1->getProvincia()!=""){
				LugarNacimiento->insertar(aux1);
			}
			this->LugarNacimiento->borrar();
		}
		else{
			this->LugarNacimiento->consultar(aux1);
			LugarNacimiento->moverInicio();
			while(!LugarNacimiento->finLista()){
				LugarNacimiento->consultar(aux2);
				if(aux2>aux1){
					if(aux1->getProvincia()!=""){
						LugarNacimiento->insertar(aux1);
					}
				}
				else{
					LugarNacimiento->avanzar();
				}
			}
			if(LugarNacimiento->finLista()){
				if(aux1->getProvincia()!=""){
					LugarNacimiento->insertar(aux1);
				}
			}
			this->LugarNacimiento->borrar();
		}
	}
	LugarNacimiento->moverInicio();
	while(!LugarNacimiento->estaVacia()){
		LugarNacimiento->consultar(aux1);
		this->LugarNacimiento->insertar(aux1);
		LugarNacimiento->borrar();
		this->LugarNacimiento->avanzar();
	}
	delete LugarNacimiento;
}
