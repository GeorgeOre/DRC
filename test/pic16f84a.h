#ifndef __PIC16F84A_H
#define __PIC16F84A_H

#include <stdint.h>

#define TRISA  (*(volatile uint8_t *) 0x85)
#define PORTA  (*(volatile uint8_t *) 0x05)
#define TRISB  (*(volatile uint8_t *) 0x86)
#define PORTB  (*(volatile uint8_t *) 0x06)

#endif // __PIC16F84A_H
