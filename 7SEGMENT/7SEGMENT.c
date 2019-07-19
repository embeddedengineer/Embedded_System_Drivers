/*
 * 7SEGMENT.c
 *
 *  Created on: Jul 19, 2019
 *      Author: abdelrhman
 */

#include "7SEGMENT.h"
#include <avr/io.h>
#include <util/delay.h>


void Init_7SEG(void){
	BCD_DDR      = 0b00001111;
	_7SEG_EN_DDR = 0b00111100;
}

void DrawNumber(unsigned char number, unsigned char DisplayNum){
	switch (DisplayNum) {
		//    				  76543210
		case 4: _7SEG_EN = ~0b00010000; break;
		case 3: _7SEG_EN = ~0b00100000; break;
		case 2: _7SEG_EN = ~0b00001000; break;
		case 1: _7SEG_EN = ~0b00000100; break;
	}
	BCD_DATA = (BCD_DATA & 0b11110000) | number;
}
