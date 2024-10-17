// Project Name: Aixt project, https://github.com/fermarsan/aixt.git
// Author: Yahir Eduardo Gracia Ovalle
// Date: 2024
// License: MIT
//
// Description: Pin management functions (M0sense port)

module time

// sleep is a delay function in milliseconds for the Aixt PC port. 
@[inline]
pub fn sleep_ms(tms int) {
	C.mtimer_delay_ms(tms)
}