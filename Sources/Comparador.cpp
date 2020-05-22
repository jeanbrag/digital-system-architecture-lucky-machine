/*
 * Comparador.cpp
 * Jean Cleison Braga Guimaraes
 */

#include "Comparador.h"

Comparador::Comparador() {
	dataa; //sinal que vem do contador
	datab; //chave de programação

}
void Comparador:: setDataA(uint32_t dataa){
	this->dataa = dataa;
}
void Comparador:: setDataB(uint8_t datab){
	this->datab = datab;
}
bool Comparador::compare(){
	if( this->dataa > this->datab){
		return 0;
	}else{
		return 1;
	}
}

