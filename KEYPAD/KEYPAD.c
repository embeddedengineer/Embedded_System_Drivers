/*
 * KEYPAD.c
 *
 *  Created on: Jul 22, 2019
 *      Author: abdelrhman
 */

#include "KEYPAD.h"
#include"avr/io.h"

const unsigned char PortValue[3] = { 0x7C, 0xBC, 0xDC };
const unsigned char Numbers[3][3]   = { {3, 4, 7},
									    {1, 5, 8},
									    {2, 6, 9}
};

void KEYPAD_Init(void){
	KEYPADDDR  = 0xE0;
	KEYPADPORT = 0xFF;
}

unsigned char KEYPAD_PressedKey(void){
	unsigned char i;
	for(i = 0 ; i < 3 ; i++){
		KEYPADPORT = PortValue[i];
		if (!(ROW1)) {
			while(!(ROW1));
			return Numbers[i][0];
		}
		if (!(ROW2)) {
			while(!(ROW2));
			return Numbers[i][1];
		}
		if (!(ROW3)){
			while(!(ROW3));
			return Numbers[i][2];
		}
	}
	return 0;
}
