/*
 * lpmCounter.cpp
 * Jean Cleison Braga Guimaraes
 */

#include "Contador.h"

Contador::Contador(){
	q = 5;
	data;
	cin = 0;
}
void Contador::load(uint8_t data) {

	this->data = data;
}
void Contador::incrementa(){

		if(this->q <= this->data){
			this->q = this->q + 1;
		}else{
			this->q = 0;

	}
}
uint8_t Contador::readQ(){
	return this->q;
}

void Contador::aclear(){
	this->q = 0;
}

void Contador::enable(){
	this->cin = 1;
}

void Contador::disable(){
	this->cin = 0;
}

bool Contador::readCin(){
	return this->cin;
}

