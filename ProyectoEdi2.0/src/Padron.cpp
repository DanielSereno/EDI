/*
 * Padron.cpp
 *
 *  Created on: 1 may. 2018
 *      Author: usuario
 */


#include "Padron.h"

Padron::Padron(){
	codigoVia=0;
	anoNacimiento=NULL;
	lugarNacimiento=NULL;
	estudios=NULL;
	numHombres=0;
	numMujeres=0;
	nacionalidad=NULL;
	anoPadron=0;
}

Padron::Padron(	int codigoVia, string anoNacimiento, string lugarNacimiento, string estudios,int numHombres, int numMujeres, string nacionalidad, int anoPadron){
	this->codigoVia=codigoVia;
	this->anoNacimiento= new GestorAnoNacimiento();
	this->anoNacimiento->cargarAnoNacimiento(anoNacimiento);
	this->lugarNacimiento=new GestorLugarNacimiento();
	this->lugarNacimiento->cargarLugarNacimiento(lugarNacimiento);
	this->estudios= new GestorEstudios();
	this->estudios->cargarEstudios(estudios);
	this->numHombres=numHombres;
	this->numMujeres=numMujeres;
	this->nacionalidad=new GestorNacionalidades();
	this->nacionalidad->cargarNacionalidades(nacionalidad);
	this->anoPadron=anoPadron;
}

Padron::Padron(Padron &padron){
	this->codigoVia=padron.codigoVia;
	this->anoNacimiento=padron.anoNacimiento;
	this->lugarNacimiento=padron.lugarNacimiento;
	this->estudios=padron.estudios;
	this->numHombres=padron.numHombres;
	this->numMujeres=padron.numMujeres;
	this->nacionalidad=padron.nacionalidad;
	this->anoPadron=padron.anoPadron;
}

Padron:: ~Padron(){
	this->anoNacimiento->~GestorAnoNacimiento();
	this->lugarNacimiento->~GestorLugarNacimiento();
	this->estudios->~GestorEstudios();
	this->nacionalidad->~GestorNacionalidades();
}

void Padron:: setcodigoVia(int codigoVia){
	this->codigoVia=codigoVia;
}

void Padron:: setnumHombres(int numHombres){
	this->numHombres=numHombres;
}

void Padron:: setnumMujeres(int numMujeres){
	this->numMujeres=numMujeres;
}

void Padron:: setanoPadron(int anoPadron){
	this->anoPadron=anoPadron;
}

void Padron:: setanoNacimientoPadron(string anoNacimiento){
	this->anoNacimiento= new GestorAnoNacimiento();
	this->anoNacimiento->cargarAnoNacimiento(anoNacimiento);
}

void Padron:: setlugarNacimientoPadron(	string lugarNacimiento){
	this->lugarNacimiento=new GestorLugarNacimiento();
	this->lugarNacimiento->cargarLugarNacimiento(lugarNacimiento);
}

void Padron:: setestudiosPadron(string estudios){
	this->estudios= new GestorEstudios();
	this->estudios->cargarEstudios(estudios);
}

void Padron:: setnacionalidadPadron(	string nacionalidad){
	this->nacionalidad=new GestorNacionalidades();
	this->nacionalidad->cargarNacionalidades(nacionalidad);
}

int Padron:: getcodigoVia(){
	return this->codigoVia;
}

int Padron:: getnumHombres(){
	return this->numHombres;
}

int Padron:: getnumMujeres(){
	return this->numMujeres;
}

int Padron:: getanoPadron(){
	return this->anoPadron;
}

GestorAnoNacimiento* Padron:: getAnoNacimiento(){
	return this->anoNacimiento;
}

GestorLugarNacimiento*  Padron:: getLugarNacimiento(){
	return this->lugarNacimiento;
}

GestorEstudios* Padron:: getEstudios(){
	return this->estudios;
}

GestorNacionalidades* Padron:: getNacionalidad(){
	return this->nacionalidad;
}

void Padron:: mostrar(){
	cout<< "El codigo de la via es: "<<this->codigoVia<<endl;
	this->anoNacimiento->mostrar();
	this->lugarNacimiento->mostrar();
	this->estudios->mostrar();
	cout<< "Hay "<<this->numHombres<< " hombres y "<< this->numMujeres<< " mujeres"<<endl;
	this->nacionalidad->mostrar();
	cout<< "El padron es del año "<<this->anoPadron<<endl;
}

bool Padron:: cargarPadron(int codigo){
	string aux, Codigo, AnoNacimiento, LugarNacimiento, Estudios, NumMujeres, NumHombres, Nacionalidades, AnoPadron;
	int codigoPadron, NumMujeresPadron, NumHombresPadron, AnoPadronPadron;
	bool encontrado=false;
	ifstream fEnt;
	fEnt.open("InformacionPadron.csv");
	if(fEnt.is_open()){
		getline(fEnt,aux);
		while(!fEnt.eof()&&encontrado==false){
			getline(fEnt,Codigo, '#');
			getline(fEnt,AnoNacimiento, '#');
			getline(fEnt,LugarNacimiento, '#');
			getline(fEnt,Estudios, '#');
			getline(fEnt,NumMujeres, '#');
			getline(fEnt,NumHombres, '#');
			getline(fEnt,Nacionalidades, '#');
			getline(fEnt,AnoPadron);
			codigoPadron=atoi(Codigo.c_str());
			NumMujeresPadron=atoi(NumMujeres.c_str());
			NumHombresPadron=atoi(NumHombres.c_str());
			AnoPadronPadron=atoi(AnoPadron.c_str());
			if(codigo==codigoPadron){
				this->codigoVia=codigoPadron;
				this->anoNacimiento= new GestorAnoNacimiento();
				this->anoNacimiento->cargarAnoNacimiento(AnoNacimiento);
				this->lugarNacimiento=new GestorLugarNacimiento();
				this->lugarNacimiento->cargarLugarNacimiento(LugarNacimiento);
				this->estudios= new GestorEstudios();
				this->estudios->cargarEstudios(Estudios);
				this->numHombres=NumHombresPadron;
				this->numMujeres=NumMujeresPadron;
				this->nacionalidad=new GestorNacionalidades();
				this->nacionalidad->cargarNacionalidades(Nacionalidades);
				this->anoPadron=AnoPadronPadron;
				encontrado=true;
			}
		}
	}
	return encontrado;
}

int Padron:: numPersonasAno(int menor, int mayor){
	return this->anoNacimiento->numPersonasAno(menor, mayor);
}
