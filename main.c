/*
 * main.c
 *
 *  Created on: Jul 14, 2019
 *      Author: abdelrhman
 */

#include "GPIO/GPIO.h"
#include "LED_MATRIX/MATRIX.h"
#include "7SEGMENT/7SEGMENT.h"
#include <util/delay.h>


int main(void) {
	Init_7SEG();
	unsigned char x , y;
	while(1){
		for(x = 0 , y = 1 ; x < 10 ; x++){
			DrawNumber(x ,  y);
			y = y == 4 ? 1 : y + 1;
			_delay_ms(1000);
		}
	}

	return 1;
}

