/*
 * MATRIX.c
 *
 *  Created on: Jul 18, 2019
 *      Author: abdelrhman
 */

#include "MATRIX.h"
#include <avr/io.h>
#include <util/delay.h>

const unsigned char ColsValue[8] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};

const unsigned char CharSet[][8] = {
		//-------------------A----------------------
		{ 0xff, 0xff, 0x01, 0x76, 0x76, 0x01, 0xff, 0xff},
		//-------------------B----------------------
		{ 0xff, 0xff, 0x00, 0xb6, 0xb6, 0xc9, 0xff, 0xff},
		//-------------------D----------------------
		{ 0xff, 0xff, 0x00, 0x3e, 0x5d, 0xc9, 0xff, 0xff},
		//-------------------O----------------------
		{ 0xff, 0xe3, 0xdd, 0x3e, 0x3e, 0xdd, 0xe3, 0xff},
};


void DrawString(unsigned char *String){
	ROW_PORT = 0xff;
	COL_PORT = 0xff;
	const unsigned char * volatile ptrChar;
	unsigned char RefreshRate = 0;
	unsigned char Values = 0;
	unsigned int u = 0 ;
	for(; u < sizeof(String) - 1 ; u++) {
		switch (String[u]) {
			case 'A': ptrChar = CharSet[0]; break;
			case 'B': ptrChar = CharSet[1]; break;
			case 'D': ptrChar = CharSet[2]; break;
			case 'O': ptrChar = CharSet[3]; break;
		}

		for(; RefreshRate < 500 ; RefreshRate++) {
				for(; Values < 8 ; Values++){
					COL_PORT = ColsValue[Values];
					ROW_PORT = ptrChar[Values];
					_delay_us(150);
				}
		}
		RefreshRate = 0;
		Values = 0;
	}
}
