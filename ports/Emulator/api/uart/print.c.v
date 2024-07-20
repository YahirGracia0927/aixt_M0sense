// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Fernando Martínez Santa
// Date: 2023-2024
// License: MIT
module uart

@[inline]
pub fn print(msg string) {
	C.printf('\033[1;32m')	// green
    C.printf('%s', msg)
}