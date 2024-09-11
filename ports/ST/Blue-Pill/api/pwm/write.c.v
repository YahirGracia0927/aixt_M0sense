// Project Name: Aixt https://github.com/fermarsan/aixt.git
// Author: Fernando M. Santa - Julian Camilo Guzmán Zambrano - Juan Pablo Gonzalez Penagos
// Date: 2022-2024
// License: MIT
//
// // Description: WRITE functions (Blue-Pill)
//              (PC port) 

module pwm

@[inline]
pub fn write(PIN_NAME, MODE) {
	C.pwmWrite(PIN_NAME, MODE)
}