// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Fernando Martínez Santa
// Date: 2024
// License: MIT
module pin

// pin_high puts a low value (logic 0) to a specific pin
@[inline]
pub fn low(name u8) {   
    C.digitalWrite(name, C.LOW)
}
