/*
 * ControlService.cpp
 * Jean Cleison Braga Guimaraes
 */

#include <ControlService.h>

ControlService::ControlService() {
	// TODO Auto-generated constructor stub

	btn = btnNoService;
	sid = noService;
	led = stdOnSortOff;

}

void ControlService::setup(Contador *contador, Comparador *comparador, FlipFlop *flipflop, Botao *btnLD, Botao *btnSorteio, Botao *btnLedOff){
	contador = new Contador;
	comparador = new Comparador;
	flipflop = new FlipFlop;
	btnLD = new Botao(gpio_PTA1);
	btnSorteio = new Botao(gpio_PTA2);
	btnLedOff = new Botao(gpio_PTD4);
}

void ControlService::readInputs(Botao *btnLD, Botao *btnSorteio, Botao *btnLedOff){
	if(!btnLD->isOn()){
		this->btn = btnOnOff;
	}
	else if(!btnSorteio->isOn()){
		this->btn = btnSort;
	}
	else if(!btnLedOff->isOn()){
		this->btn = btnLedTurnOff;
	}
	else
		this->btn = btnNoService;
}
void ControlService::selectService(btn_t btn){
		switch(btn){
			case btnOnOff:	sid = onOff;
							break;
			case btnSort: 	sid = sort;
							break;
			case btnLedTurnOff: sid = ledTurnOff;
								break;
			default: sid = noService;
		}
}

void ControlService::doService(sid_t sid,Botao *btnLD, Botao *btnSorteio,Botao *btnLedOff, Contador *contador, Comparador *comparador, FlipFlop *flipflop, Temporizador temporizador, OnOffService serviceLD, SortService serviceSort,TurnOffLedService serviceTurnOffLed,CountService serviceCount){

	switch(sid){
			case onOff: delay(500);
						if(btnLD->isOn()){
								serviceLD.onOff(btnLD, contador, comparador, flipflop, temporizador);

								if(this->led == stdOnSortOff){

									this->led = stdOffSortOff;
								}
								else if(this->led == stdOffSortOff or this->led == stdOffSortOn){
									this->led = stdOnSortOff;
								}
							}
								break;

			case sort:	delay(500);
						if(btnSorteio->isOn()){
								if(contador->readCin())
									this->led = serviceSort.sortService(comparador,flipflop,contador);
						}
								break;

			case ledTurnOff: delay(500);
							if(btnLedOff->isOn()){
								if(contador->readCin())
									this->led = serviceTurnOffLed.apagaLedService(flipflop);
							}
								break;
			case count:         serviceCount.contaService(contador);
								break;
			case noService: break;

		}
}

void ControlService::writeOutputs(led_t led, Led ledStb, Led ledSort){
	switch(led){
		case stdOnSortOff:	ledStb.turnOn();
							ledSort.turnOff();
							break;
		case stdOffSortOn:	ledStb.turnOff();
							ledSort.turnOn();
							break;
		case stdOffSortOff:	ledStb.turnOff();
							ledSort.turnOff();

							break;

	}

}

btn_t ControlService::readBtn(){
	return btn;
}

sid_t ControlService::readSid(){
	return sid;
}

led_t ControlService::readLed(){
	return led;
}

void ControlService::setSid(sid_t a){
	this->sid = a;
}
