// Project Name: Aixt project, https://github.com/fermarsan/aixt.git
// Author: Yahir Eduardo Gracia Ovalle
// Date: 2024
// License: MIT
//
// Description: Pin management functions (M0sense port)

module port

// read function reads an 8 bit value from a port
@[inline]
pub fn read(name int) int {
	addr = &(C.gpio_set_mode) + name
	return unsafe { *addr }	
}