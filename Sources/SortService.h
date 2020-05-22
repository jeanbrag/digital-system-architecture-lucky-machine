/*
 * SortService.h
 * Jean Cleison Braga Guimaraes
 */

#ifndef SOURCES_SORTSERVICE_H_
#define SOURCES_SORTSERVICE_H_
#include "FlipFlop.h"
#include "Contador.h"
#include "Comparador.h"
#include "types.h"

class SortService {
	public:
		SortService();
		led_t sortService(Comparador *comparador, FlipFlop *flipflop, Contador *contador);
};

#endif /* SOURCES_SORTSERVICE_H_ */
