#include <pic16f84a.h>

// Define a delay function
void delay(unsigned int ms) {
    while (ms--) {
        __asm nop __endasm;
    }
}

void main(void) {
    // Set RA0 as output
    TRISA = 0xFE;
    // Turn off RA0 initially
    PORTA = 0x00;

    while (1) {
        // Toggle RA0
        PORTA ^= 0x01;
        // Delay
        delay(50000);
    }
}
