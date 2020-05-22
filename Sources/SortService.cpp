/*
 * SortService.cpp
 * Jean Cleison Braga Guimaraes
 */

#include <SortService.h>

SortService::SortService() {
	// TODO Auto-generated constructor stub
}

led_t SortService::sortService(Comparador *comparador, FlipFlop *flipflop, Contador *contador){
	comparador->setDataA(contador->readQ());
	flipflop->setDataA(comparador->compare());
	if (flipflop->flipFlop())
		return stdOffSortOn;
	else
		return stdOffSortOff;

}
