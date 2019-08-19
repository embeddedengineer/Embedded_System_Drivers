/*
 * KEYPAD.h
 *
 *  Created on: Jul 22, 2019
 *      Author: abdelrhman
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_

#define KEYPADDDR  DDRA
#define KEYPADPORT PORTA

#define ROW1 PINA & (1<<4)
#define ROW2 PINA & (1<<3)
#define ROW3 PINA & (1<<2)

extern void KEYPAD_Init(void);
extern unsigned char KEYPAD_PressedKey(void);

#endif /* KEYPAD_H_ */
