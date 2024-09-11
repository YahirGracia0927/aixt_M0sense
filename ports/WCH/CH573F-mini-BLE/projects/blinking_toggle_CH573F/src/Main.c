// This C code was automatically generated by Aixt Project
// Device = CH573F
// Board = device
// Backend = c


#include "CH57x_common.h"
#define true 1
#define time.sleep_ms(TIME)    DelayMs(TIME)
#define a4  A, 4
#define a5  A, 5
#define a8  A, 8
#define a9  A, 9
#define a10 A, 10
#define a11 A, 11
#define a12 A, 12
#define a13 A, 13
#define a14 A, 14
#define a15 A, 15
#define b4  B, 4
#define b7  B, 7
#define b10 B, 10
#define b11 B, 11
#define b12 B, 12
#define b13 B, 13
#define b14 B, 14
#define b15 B, 15
#define b22 B, 22
#define b23 B, 23
#define output    		GPIO_ModeOut_PP_5mA
#define input     		GPIO_ModeIN_Floating
#define in_pullup		GPIO_ModeIN_PU
const in_pulldown = C.GPIO_ModeIN_PD
@[inline]
pub fn high_(port, ...) {
	C.GPIO##port##_SetBits(GPIO_Pin_##__VA_ARGS__)
}
@[inline]
pub fn high(PIN_NAME) {
	C.pin.high_(PIN_NAME)
}
@[inline]
pub fn low_(port, ...) {
	C.GPIO##port##_ResetBits(GPIO_Pin_##__VA_ARGS__)
}
@[inline]
pub fn low(PIN_NAME) {
	C.pin.low_(PIN_NAME)
}
@[inline]
pub fn read_(port, ...) {
	C.GPIO##port##_ReadPortPin(GPIO_Pin_##__VA_ARGS__)
}
@[inline]
pub fn read(PIN_NAME) {
	C.pin.read_(PIN_NAME)
}
@[inline]
pub fn setup_(port, pin, ...) {
	C.GPIO##port##_ModeCfg(GPIO_Pin_##pin, ##__VA_ARGS__)
}
@[inline]
pub fn setup(PIN_NAME, PIN_MODE) {
	C.pin.setup_(PIN_NAME, PIN_MODE)
}
@[inline]
pub fn toggle_(port, ...) {
	C.GPIO##port##_InverseBits(GPIO_Pin_##__VA_ARGS__)
}
@[inline]
pub fn toggle(PIN_NAME) {
	C.pin.toggle_(PIN_NAME)
}





int main(void) {

pin.setup(a8, output);
while(true) {
pin.toggle(a8);
time.sleep_ms(150);
}
return 0;
}