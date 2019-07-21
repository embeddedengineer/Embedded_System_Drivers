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

#include "../REGISTERS.h"

// Generic macros to be used with all register.
#define PinMode(DDR, PinName, In_Out) DDR->PinName = In_Out
#define DigitalWrite(PORT, PinName, H_L) PORT->PinName = H_L
#define DDR_SetValue(_DDR, value)  _DDR->DDR = value
#define PORT_SetValue(_PORT, value) _PORT->PORT = value
#define PORT_TogglePin(_PORT, PinName) _PORT->PinName ^= 1
#define PinCheck(PIN, PinName) PIN->PinName

#endif /* GPIO_H_ */
