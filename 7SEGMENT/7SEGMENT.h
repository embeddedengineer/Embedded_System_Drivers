/*
 * 7SEGMENT.h
 *
 *  Created on: Jul 19, 2019
 *      Author: abdelrhman
 */

#ifndef _7SEGMENT_H_
#define _7SEGMENT_H_

#define BCD_DATA PORTB->PORT
#define _7SEG_EN PORTC->PORT

#define BCD_DDR 	 DDRB->DDR
#define _7SEG_EN_DDR DDRC->DDR

extern void SEG_Print(unsigned char number, unsigned char DisplayNum);
extern void SEG_Init(void);

#endif /* _7SEGMENT_H_ */
