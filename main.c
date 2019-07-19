/*
 * main.c
 *
 *  Created on: Jul 14, 2019
 *      Author: abdelrhman
 */

#include "GPIO/GPIO.h"
#include "LED_MATRIX/MATRIX.h"
#include "7SEGMENT/7SEGMENT.h"
#include "LCD/LCD.h"
#include <util/delay.h>


int main(void) {
	char Str[] = "Abdo";
	unsigned char x = 0;
	unsigned char y = 0;
	Init_Lcd();
	while(1){
		LcdClear();
		LcdXY(x,y);
		LcdPrint(Str);
		if(y >= 15 - (sizeof(Str) - 1) ){
			y = 0;
			x = 0;
		}
		else {
			y = y + (sizeof(Str) - 1);
			x = x ^ 1;
		}
		_delay_ms(1000);
	}

	return 1;
}

