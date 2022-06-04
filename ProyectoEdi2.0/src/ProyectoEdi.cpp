//============================================================================
// Name        : ProyectoEdi.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "GestorBarrios.h"


using namespace std;


void cargarDatos(	GestorBarrios &barrio){
	barrio.cargarBarrios();
}

void mostrarViasBarrio(GestorBarrios barrio){
	string nombre, nombre_1;
	vector<string> vNombre;
	int longitud,i=0;
	char separador;
	cout<< "Que barrio quieres leer?"<< endl;
	cin>> nombre;
	cout<< "Que separador has usado?"<<endl;
	cin>> separador;
	vNombre=splitStringToVector(nombre, separador);
	longitud= vNombre.size();
	nombre="";
	while(i<longitud){
		nombre_1=vNombre[i];
		if(longitud-i==1){
			nombre=nombre+ nombre_1;
		}
		else
			nombre=nombre+ nombre_1+ " ";
		i=i+1;
	}
	barrio.mostrarViasBarrio(nombre);
}

void mostrarViasVariosBarrios(GestorBarrios barrio){
	barrio.mostrarViasVariosBarrios();
}

void numPersonas(GestorBarrios barrio){
	int menor=0, mayor=9;
	while(mayor<110){
		cout<< "El numero de personas entre "<<menor<<" y "<< mayor<<" es "<<barrio.numPersonasAno(menor, mayor)<<endl;
		menor=menor+10;
		mayor=mayor+10;
	}
}

int main() {
	GestorBarrios barrio;
	cargarDatos(barrio);
	mostrarViasBarrio( barrio);
	mostrarViasBarrio( barrio);
	barrio.~GestorBarrios();
	return 0;
}
