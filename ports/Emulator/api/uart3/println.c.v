// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Fernando Martínez Santa
// Date: 2023-2024
// License: MIT
module uart3

@[inline]
pub fn println(msg string) {
	C.printf('\033[1;31m')	// red
    C.printf('%s\n', msg)
}
