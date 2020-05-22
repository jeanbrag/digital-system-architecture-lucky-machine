/*
 * turnOffLedService.cpp
 * Jean Cleison Braga Guimaraes
 */

#include <TurnOffLedService.h>

TurnOffLedService::TurnOffLedService() {
	// TODO Auto-generated constructor stub

}

led_t TurnOffLedService::apagaLedService(FlipFlop *flipflop){
	if(!flipflop->apagaLed())
		return stdOffSortOff;
}

