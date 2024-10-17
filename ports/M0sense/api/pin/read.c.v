// Project Name: Aixt project, https://github.com/fermarsan/aixt.git
// Author: Yahir Eduardo Gracia Ovalle
// Date: 2024
// License: MIT
//
// Description: Pin management functions (M0sense port)

module pin

//Reads the value from a specified digital pin, either HIGH or LOW
@[inline]
pub fn read(name int) int {
	return C.gpio_read(name)
}