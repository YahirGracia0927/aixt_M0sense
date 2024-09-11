// Project Name: Aixt https://github.com/fermarsan/aixt.git
// Author: Fernando M. Santa - Johann Escobar Guzman - Daniel Andrés Vásquez Gómez
// Date: 2023-2024
// License: MIT
//
// // Description: HIGH functions (W801)
//              (PC port) 

module pin

@[inline]
pub fn high(PIN_NAME) {
	C.digitalWrite(PIN_NAME, HIGH)
}