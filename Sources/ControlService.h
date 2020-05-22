/*
 * ControlService.h
 * Jean Cleison Braga Guimaraes
 */

#ifndef SOURCES_CONTROLSERVICE_H_
#define SOURCES_CONTROLSERVICE_H_

#include <stdlib.h>
#include <Botao.h>
#include "OnOffService.h"
#include "types.h"
#include "SortService.h"
#include "TurnOffLedService.h"
#include "CountService.h"
#include "Led.h"
#include "delay.h"

class ControlService {
	private:
		btn_t btn;
		sid_t sid;
		led_t led;

	public:
		ControlService();
		void setup(Contador *contador, Comparador *comparador, FlipFlop *flipflop, Botao *btnLD, Botao *btnSorteio, Botao *btn);
		void readInputs(Botao *btnLD, Botao *btnSorteio, Botao *btnLedOff);
		void selectService(btn_t btn);
		void doService(	sid_t sid,
						Botao *btnLD,
						Botao *btnSorteio,
						Botao *btnLedOff,
						Contador *contador,
						Comparador *comparador,
						FlipFlop *flipflop,
						Temporizador temporizador,
						OnOffService serviceLD,
						SortService serviceSort,
						TurnOffLedService serviceTurnOffLed,
						CountService serviceCount);
		void writeOutputs(led_t led, Led ledStb, Led ledSort);
		btn_t readBtn();
		sid_t readSid();
		led_t readLed();
		void setSid(sid_t a);

};

#endif /* SOURCES_CONTROLSERVICE_H_ */
