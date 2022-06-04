/*
 * GestorVia.cpp
 *
 *  Created on: 3 may. 2018
 *      Author: usuario
 */

#include "GestorVia.h"


GestorVia:: GestorVia(){
	this->via=new Arbol<Via*,comparadorVias>();
}

GestorVia::~GestorVia(){
	delete this->via;
}

void GestorVia:: cargarVia(string Lugar){
	ifstream fent;
	fent.open("Via.csv");
	string linea, l,c, lugar, nombre, tipo;
	int  longitud, codigo;
	if(fent.is_open()){
		getline(fent, linea);
			if(!fent.eof()){
				while(!fent.eof()){
					getline(fent,lugar,'#');
					getline(fent,nombre,'#');
					getline(fent,l,'#');
					getline(fent,tipo,'#');
					getline(fent,c);
					longitud= atoi(l.c_str());
					codigo= atoi(c.c_str());
					if(Lugar==lugar){
						this->via->insertar(new Via(lugar, nombre, tipo, longitud, codigo));
					}
				}
			}

		fent.close();
	}
	else{
		cout<<"Error al abrir Barrio.csv"<<endl;
	}
}

void GestorVia:: mostrar(){
	if(!this->via->vacio()){
		this->mostrarInOrden(this->via);
	}
}

void GestorVia::mostrarInOrden(Arbol<Via*,comparadorVias> *via){
	Arbol<Via*,comparadorVias> *aux;
	if(!via->vacio()){
		aux=via->hijoIzq();
		if(aux!=NULL){
			mostrarInOrden(aux);
		}
		cout<<via->raiz()<<" "<<endl;
		aux=via->hijoDer();
		if(aux!=NULL){
			mostrarInOrden(aux);
		}
	}
}

Via GestorVia:: buscarViaPreOrden(string nombre, Arbol<Via*,comparadorVias> *via){
	Arbol<Via*,comparadorVias> *aux;
	Via viaEncontrada;
	if(!via->vacio()){
		aux=via;
		if(aux->raiz()->getNombreVia()==nombre){
			viaEncontrada= *aux->raiz();
		}
		else{
			if(aux->raiz()->getNombreVia()<nombre){
				aux=via->hijoIzq();
				viaEncontrada=buscarViaPreOrden(nombre, aux);
			}
			else{
				if(aux->raiz()->getNombreVia()>nombre){
					aux=via->hijoDer();
					viaEncontrada=buscarViaPreOrden(nombre, aux);
			}
			}
		}
	}
	return viaEncontrada;
}

Via GestorVia::buscarVia (string nombre){
	return this->buscarVia(nombre);
}

void GestorVia::mostarViasSubCadena(string subCadena){
// utilizar raiz.find(nombre)==0

}

int GestorVia:: numPersonasAno(int menor, int mayor){
	int numPersonas=0;
	Via *aux;
	this->via->moverInicio();
	while(!this->via->finLista()){
		this->via->consultar(aux);
		numPersonas=aux->numPersonasAno(menor, mayor)+numPersonas;
		this->via->avanzar();
		aux->~Via();
	}
	return numPersonas;
}
