// Project Name: Aixt https://github.com/fermarsan/aixt.git
// Author: Fernando M. Santa - Julian Camilo Guzmán Zambrano - Juan Pablo Gonzalez Penagos
// Date: 2022-2024
// License: MIT
//
// // Description: PWM functions (Blue Pill_STM32F103C)
//              (PC port) 

@[inline]
pub fn write(PIN_NAME, MODE) {
	C.pwmWrite(PIN_NAME, MODE)
}
@[inline]
pub fn map(MODE, VALUE,VALUE1,VALUE2,VALUE3) {
	C.map(MODE, VALUE,VALUE1,VALUE2,VALUE3)
}