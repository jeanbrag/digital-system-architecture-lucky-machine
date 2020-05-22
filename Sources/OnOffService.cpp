/*
 * OnOffService.cpp
 * Jean Cleison Braga Guimaraes
 */

#include <OnOffService.h>

OnOffService::OnOffService() {
	// TODO Auto-generated constructor stub
	estado = off;
}


void OnOffService::onService(Contador *contador, Comparador *comparador, FlipFlop *flipflop, Temporizador temporizador){
	contador->enable();
	contador->load(99);
	flipflop->enable();
	comparador->setDataB(7);
	temporizador.liga();
}
void OnOffService::offService(Contador *contador, Comparador *comparador, FlipFlop *flipflop, Temporizador temporizador){
	contador->disable();
	contador->aclear();
	flipflop->disable();
	temporizador.desliga();
}

void OnOffService::onOff(Botao *btnLD,Contador *contador, Comparador *comparador, FlipFlop *flipflop, Temporizador temporizador){
	if(this->estado == off){
		this->onService(contador,comparador,flipflop,temporizador);
		this->estado = on;
	}
	else{
		this->offService(contador, comparador,flipflop, temporizador);
		this->estado = off;
	}

}

estado_t OnOffService::readState(){
	return this->estado;
}
