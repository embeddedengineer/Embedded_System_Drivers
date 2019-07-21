/*
 * MATRIX.H
 *
 *  Created on: Jul 18, 2019
 *      Author: abdelrhman
 */


#ifndef LED_MATRIX_H_
#define LED_MATRIX_H_


#define COL_PORT PORTC->PORT
#define ROW_PORT PORTD->PORT

#define COL_DDR  DDRC->DDR
#define ROW_DDR  DDRD->DDR

extern void DrawString(unsigned char *String);
extern void Init_LedMatrix(void);

#endif /* LED_MATRIX_H_ */
