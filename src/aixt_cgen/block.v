// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Fernando Martínez Santa
// Date: 2024
// License: MIT
module aixt_cgen

import v.ast

// block is the code generation function for blocks.
fn (mut gen Gen) block(node ast.Block) []string {
	mut out := []string{}
	if !node.is_unsafe {
		out << '{'
	}
	for st in node.stmts {
		out << gen.ast_node(st)
	}
	if !node.is_unsafe {
		out << '}'
	}
	return out
}