/*
 * turnOffLedService.h
 * Jean Cleison Braga Guimaraes
 */

#ifndef SOURCES_TURNOFFLEDSERVICE_H_
#define SOURCES_TURNOFFLEDSERVICE_H_
#include "types.h"
#include "FlipFlop.h"

class TurnOffLedService {
private:

public:
	TurnOffLedService();
	led_t apagaLedService(FlipFlop *flipflop);
};

#endif /* SOURCES_TURNOFFLEDSERVICE_H_ */
