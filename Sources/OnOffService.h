/*
 * OnOffService.h
 * Jean Cleison Braga Guimaraes
 */

#ifndef SOURCES_ONOFFSERVICE_H_
#define SOURCES_ONOFFSERVICE_H_
#include "Botao.h"
#include "Comparador.h"
#include "Contador.h"
#include "FlipFlop.h"
#include "Temporizador.h"

enum estado_t{
	on,
	off,
};


class OnOffService {
	private:
		estado_t estado;
	public:
		OnOffService();
		void onService(Contador *contador, Comparador *comparador, FlipFlop *flipflop, Temporizador temporizador);
		void offService(Contador *contador, Comparador *comparador, FlipFlop *flipflop, Temporizador temporizador);
		void onOff(Botao *btnLD, Contador *contador, Comparador *comparador, FlipFlop *flipflop, Temporizador temporizador);
		estado_t readState();

};

#endif /* SOURCES_ONOFFSERVICE_H_ */
