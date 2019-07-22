/*
 * KEYPAD.h
 *
 *  Created on: Jul 22, 2019
 *      Author: abdelrhman
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_

#define KEYPADDDR  DDRA->DDR
#define KEYPADPORT PORTA->PORT

#define ROW1 PINA->PA4
#define ROW2 PINA->PA3
#define ROW3 PINA->PA2

extern void KEYPAD_Init(void);
extern unsigned char KEYPAD_PressedKey(void);

#endif /* KEYPAD_H_ */
