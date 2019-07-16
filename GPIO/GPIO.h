/*
 * GPIO.h
 *
 *  Created on: Jul 14, 2019
 *      Author: abdelrhman
 */

#ifndef GPIO_H_
#define GPIO_H_

#define INPUT  0
#define OUTPUT 1

#define HIGH   1
#define LOW    0

//---------------------------------- Port A  Registers ----------------------------------
typedef union {
	unsigned char DDR;
	struct {
		unsigned char PA0 : 1;
		unsigned char PA1 : 1;
		unsigned char PA2 : 1;
		unsigned char PA3 : 1;
		unsigned char PA4 : 1;
		unsigned char PA5 : 1;
		unsigned char PA6 : 1;
		unsigned char PA7 : 1;
	};
}_DDRA;

volatile _DDRA * const DDRA = (volatile _DDRA *)0x3A;

typedef union {
	unsigned char PORT;
	struct {
		unsigned char PA0 : 1;
		unsigned char PA1 : 1;
		unsigned char PA2 : 1;
		unsigned char PA3 : 1;
		unsigned char PA4 : 1;
		unsigned char PA5 : 1;
		unsigned char PA6 : 1;
		unsigned char PA7 : 1;
	};
}_PORTA;

volatile _PORTA * const PORTA = (volatile _PORTA *)0x3B;

typedef union {
	unsigned char PIN;
	struct {
		unsigned char PA0 : 1;
		unsigned char PA1 : 1;
		unsigned char PA2 : 1;
		unsigned char PA3 : 1;
		unsigned char PA4 : 1;
		unsigned char PA5 : 1;
		unsigned char PA6 : 1;
		unsigned char PA7 : 1;
	};
}_PINA;

volatile _PINA * const PINA = (volatile _PINA *)0x39;
//---------------------------------- END ------------------------------------------------

//---------------------------------- Port B Registers -----------------------------------
typedef union {
	unsigned char DDR;
	struct {
		unsigned char PB0 : 1;
		unsigned char PB1 : 1;
		unsigned char PB2 : 1;
		unsigned char PB3 : 1;
		unsigned char PB4 : 1;
		unsigned char PB5 : 1;
		unsigned char PB6 : 1;
		unsigned char PB7 : 1;
	};
}_DDRB;

volatile _DDRB * const DDRB = (volatile _DDRB *)0x37;

typedef union {
	unsigned char PORT;
	struct {
		unsigned char PB0 : 1;
		unsigned char PB1 : 1;
		unsigned char PB2 : 1;
		unsigned char PB3 : 1;
		unsigned char PB4 : 1;
		unsigned char PB5 : 1;
		unsigned char PB6 : 1;
		unsigned char PB7 : 1;
	};
}_PORTB;

volatile _PORTB * const PORTB = (volatile _PORTB *)0x38;

typedef union {
	unsigned char PIN;
	struct {
		unsigned char PB0 : 1;
		unsigned char PB1 : 1;
		unsigned char PB2 : 1;
		unsigned char PB3 : 1;
		unsigned char PB4 : 1;
		unsigned char PB5 : 1;
		unsigned char PB6 : 1;
		unsigned char PB7 : 1;
	};
}_PINB;

volatile _PINB * const PINB = (volatile _PINB *)0x36;
//---------------------------------- END ------------------------------------------------

//---------------------------------- Port C Registers -----------------------------------
typedef union {
	unsigned char DDR;
	struct {
		unsigned char PC0 : 1;
		unsigned char PC1 : 1;
		unsigned char PC2 : 1;
		unsigned char PC3 : 1;
		unsigned char PC4 : 1;
		unsigned char PC5 : 1;
		unsigned char PC6 : 1;
		unsigned char PC7 : 1;
	};
}_DDRC;

volatile _DDRC * const DDRC = (volatile _DDRC *)0x34;

typedef union {
	unsigned char PORT;
	struct {
		unsigned char PC0 : 1;
		unsigned char PC1 : 1;
		unsigned char PC2 : 1;
		unsigned char PC3 : 1;
		unsigned char PC4 : 1;
		unsigned char PC5 : 1;
		unsigned char PC6 : 1;
		unsigned char PC7 : 1;
	};
}_PORTC;

volatile _PORTC * const PORTC = (volatile _PORTC *)0x35;

typedef union {
	unsigned char PIN;
	struct {
		unsigned char PC0 : 1;
		unsigned char PC1 : 1;
		unsigned char PC2 : 1;
		unsigned char PC3 : 1;
		unsigned char PC4 : 1;
		unsigned char PC5 : 1;
		unsigned char PC6 : 1;
		unsigned char PC7 : 1;
	};
}_PINC;

volatile _PINC * const PINC = (volatile _PINC *)0x33;
//---------------------------------- END ------------------------------------------------

//---------------------------------- Port D Registers -----------------------------------
typedef union {
	unsigned char DDR;
	struct {
		unsigned char PD0 : 1;
		unsigned char PD1 : 1;
		unsigned char PD2 : 1;
		unsigned char PD3 : 1;
		unsigned char PD4 : 1;
		unsigned char PD5 : 1;
		unsigned char PD6 : 1;
		unsigned char PD7 : 1;
	};
}_DDRD;

volatile _DDRD * const DDRD = (volatile _DDRD *)0x31;

typedef union {
	unsigned char PORT;
	struct {
		unsigned char PD0 : 1;
		unsigned char PD1 : 1;
		unsigned char PD2 : 1;
		unsigned char PD3 : 1;
		unsigned char PD4 : 1;
		unsigned char PD5 : 1;
		unsigned char PD6 : 1;
		unsigned char PD7 : 1;
	};
}_PORTD;

volatile _PORTD * const PORTD = (volatile _PORTD *)0x32;

typedef union {
	unsigned char PIN;
	struct {
		unsigned char PD0 : 1;
		unsigned char PD1 : 1;
		unsigned char PD2 : 1;
		unsigned char PD3 : 1;
		unsigned char PD4 : 1;
		unsigned char PD5 : 1;
		unsigned char PD6 : 1;
		unsigned char PD7 : 1;
	};
}_PIND;

volatile _PIND * const PIND = (volatile _PIND *)0x30;
//---------------------------------- END ------------------------------------------------


// Generic macros to be used with all register.
#define PinMode(DDR, PinName, In_Out) DDR->PinName = In_Out
#define DigitalWrite(PORT, PinName, H_L) PORT->PinName = H_L
#define DDR_SetValue(_DDR, value)  _DDR->DDR = value
#define PORT_SetValue(_PORT, value) _PORT->PORT = value
#define PORT_TogglePin(_PORT, PinName) _PORT->PinName ^= 1
#define PinCheck(PIN, PinName) PIN->PinName

#endif /* GPIO_H_ */
