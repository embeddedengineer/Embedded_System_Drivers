/*
 * 7SEGMENT.h
 *
 *  Created on: Jul 19, 2019
 *      Author: abdelrhman
 */

#ifndef _7SEGMENT_H_
#define _7SEGMENT_H_

#define BCD_DATA PORTB
#define _7SEG_EN PORTC

#define BCD_DDR 	 DDRB
#define _7SEG_EN_DDR DDRC

extern void SEG_Print(unsigned char number, unsigned char DisplayNum);
extern void SEG_Init(void);

#endif /* _7SEGMENT_H_ */
