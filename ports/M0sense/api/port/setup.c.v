// Project Name: Aixt project, https://github.com/fermarsan/aixt.git
// Author: Yahir Eduardo Gracia Ovalle
// Date: 2024
// License: MIT
//
// Description: Pin management functions (M0sense port)

module port

// setup configures bit by bit the pin mode of a 8 bit port
@[inline]
pub fn setup(name int, mode int) {
	addr = &(C.gpio_write) + name
	unsafe { *addr = mode }	
}