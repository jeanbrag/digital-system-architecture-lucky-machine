/*
 * Comparador.h
 * Jean Cleison Braga Guimaraes
 */

#ifndef COMPARADOR_H_
#define COMPARADOR_H_
#include <stdint.h>

class Comparador {
	protected:
		uint8_t dataa;
		uint8_t datab;
public:
	Comparador();
	void setDataA(uint32_t dataa);
	void setDataB(uint8_t datab);
	bool compare();
};

#endif /* COMPARADOR_H_ */
