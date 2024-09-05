// This C code was automatically generated by Aixt Project
// Device = PIC16F83
// Board = ---
// Backend = c

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>

#define _XTAL_FREQ 4000000

#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = ON       // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

enum pin__Pin_names {
	pin__a0 = 0,
	pin__a1,
	pin__a2,
	pin__a3,
	pin__a4,
	pin__a5,
	pin__a6,
	pin__a7,
	pin__b0,
	pin__b1,
	pin__b2,
	pin__b3,
	pin__b4,
	pin__b5,
	pin__b6,
	pin__b7,
	pin__c0,
	pin__c1,
	pin__c2,
	pin__c3,
	pin__c4,
	pin__c5,
	pin__c6,
	pin__c7,
	pin__d0,
	pin__d1,
	pin__d2,
	pin__d3,
	pin__d4,
	pin__d5,
	pin__d6,
	pin__d7,
	pin__e0,
	pin__e1,
	pin__e2,
	pin__e3,
	pin__e4,
	pin__e5,
	pin__e6,
	pin__e7,
};
enum pin__Pin_modes {
	pin__output = 0,
	pin__input,
};

#define pin__read(name)  (unsigned char)((*(&PORTA + (name >> 3)) >> (name - ((name >> 3) << 3))) & 0x01)

#define pin__high(name) *(&PORTA + (name >> 3)) |= 0x01 << (name - ((name >> 3) << 3))

#define pin__setup(name, mode) \
if(mode == 1) { \
	*(&TRISA + (name >> 3)) |= (0x01 << (name - ((name >> 3) << 3))); \
} \
else  \
{ \
	*(&TRISA + (name >> 3)) &= ~(0x01 << (name - ((name >> 3) << 3))); \
}; \
// end #define

#define pin__toggle(name) *(&PORTA + (name >> 3)) ^= 0x01 << (name - ((name >> 3) << 3))

#define pin__low(name) *(&PORTA + (name >> 3)) &= ~(0x01 << (name - ((name >> 3) << 3)))

#define pin__write(name, value) \
*(&PORTA + (name >> 3)) &= (~(0x01 << (name - ((name >> 3) << 3)))); \
*(&PORTA + (name >> 3)) |= (value << (name - ((name >> 3) << 3))); \
// end #define

void main(void) {
	pin__setup(pin__b3, pin__input); 
	pin__setup(pin__b4, pin__output); 
	while(true) {
		pin__write(pin__b4, ~pin__read(pin__b3));
	} 
}
