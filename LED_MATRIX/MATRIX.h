/*
 * MATRIX.H
 *
 *  Created on: Jul 18, 2019
 *      Author: abdelrhman
 */


#ifndef LED_MATRIX_H_
#define LED_MATRIX_H_


#define COL_PORT PORTC
#define ROW_PORT PORTD

#define COL_DDR  DDRC
#define ROW_DDR  DDRD

extern void DrawString(unsigned char *String);

#endif /* LED_MATRIX_H_ */
