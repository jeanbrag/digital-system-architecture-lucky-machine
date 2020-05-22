/*
 * types.h
 * Jean Cleison Braga Guimaraes
 */

#ifndef SOURCES_TYPES_H_
#define SOURCES_TYPES_H_

enum sid_t {
	noService,
	onOff,
	sort,
	ledTurnOff,
	count
};

enum btn_t {
	btnOnOff,
	btnSort,
	btnLedTurnOff,
	btnNoService
};

enum led_t{
	stdOnSortOff,
	stdOffSortOn,
	stdOffSortOff
};





#endif /* SOURCES_TYPES_H_ */
