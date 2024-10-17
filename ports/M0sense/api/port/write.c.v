// Project Name: Aixt project, https://github.com/fermarsan/aixt.git
// Author: Yahir Eduardo Gracia Ovalle
// Date: 2024
// License: MIT
//
// Description: Pin management functions (M0sense port)

module port

// write function writes an 8 bit value on a port
@[inline]
pub fn write(name u8, value u8) {
	addr = &(C.gpio_set_mode) + name
	unsafe { *addr = value }	
}