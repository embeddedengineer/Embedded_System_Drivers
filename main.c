/*
 * main.c
 *
 *  Created on: Jul 14, 2019
 *      Author: abdelrhman
 */

#include "GPIO/GPIO.h"
#include "LED_MATRIX/MATRIX.h"
#include <util/delay.h>


int main(void) {
	unsigned char String[] = {"ABDO"};
	DrawString(String);
	while(1){

	}

	return 1;
}

