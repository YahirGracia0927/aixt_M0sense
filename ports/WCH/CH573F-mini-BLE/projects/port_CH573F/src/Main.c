// This C code was automatically generated by Aixt Project
// Device = CH573F
// Board = device
// Backend = c

#include "CH57x_common.h"
#define true 1
#define a A
#define b B
const output = C.GPIO_ModeOut_PP_5mA
const input = C.GPIO_ModeIN_Floating
const in_pullup = C.GPIO_ModeIN_PU
const in_pulldown = C.GPIO_ModeIN_PD
@[inline]
pub fn read(PORT) {
C.GPIO##PORT##_ReadPort()
}
@[inline]
pub fn setup_(PORT, BITS, MODE) {
	C.GPIO##PORT##_ModeCfg(BITS, MODE)
}
@[inline]
pub fn setup(PORT, BITS, MODE) {
	C.port.setup_(PORT, BITS, MODE)
}
@[inline]
pub fn write_(PORT, BITS) {
	C.GPIO##PORT##_SetBits(BITS)
}
@[inline]
pub fn write(PORT, BITS) {
	C.port.write_(PORT, BITS)
}
#define time.sleep_ms(TIME)    DelayMs(TIME)

void main__init();

void port.init();

void time.init();

void main__init() {
	port.init();
	time.init();
	
}

void port.init() {
}

void time.init() {
}

int main(void) {
    SetSysClock(CLK_SOURCE_PLL_60MHz);

	main__init();
	port.setup(a, 0x00000800, port.output);
	port.setup(b, 0xFFFFFFFF, port.output);
	while(true) {
		port.write(a, 0x00000800);
		time.sleep_ms(500);
		port.write(b, 0x00000800);
		time.sleep_ms(500);
	}
	return 0;
}
