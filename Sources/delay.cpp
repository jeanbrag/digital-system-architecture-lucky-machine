/*
 * delay.cpp
 *
 *  Created on: 09/10/2019
 *      Author: Jean
 */

#include "delay.h"

void delay(volatile uint32_t nof) {
  while(nof!=0) {
    __asm("NOP");
    nof--;
  }
}
