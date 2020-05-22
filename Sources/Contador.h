/*
 * lpmCounter.h
 * Jean Cleison Braga Guimaraes
 */

#ifndef CONTADOR_H_
#define CONTADOR_H_
#include <stdint.h>

class Contador {
protected:
	volatile uint8_t q;
	uint8_t data;
	bool cin;
public:
	Contador();
	void load(uint8_t data);
	void incrementa();
	uint8_t readQ();
	void aclear();
	void enable();
	void disable();
	bool readCin();
};

#endif /* CONTADOR_H_ */
