const PREC = {
	comparative: 1,
	multiplicative: 4,
	additive: 3,
	concat: 2,
	function: 5,
	case: 6
}

module.exports = grammar({
	name: 'gprom_datalog',

	rules: {
		// TODO: add the actual grammar rules
		source_file: $ => repeat($._statement),

		_statement: $ => choice(
			$.rule,
			$.fact,
			$.fd,
			$.lineage,
			$.answer_predicate
		),

		fact: $ => seq(
			$.rel_atom,
			$.DOT),

		rule: $ => seq(field("head",$.rel_atom),
					   $.IMPL,
					   field("body", $.body),
					   $.DOT),

        body: $ => commaSep1($._body_atom),

		_body_atom: $ => choice(
			$.rel_atom,
			$.comparison_atom
		),

		rel_atom: $ => seq(
			$.predicate_name,
			$.rel_atom_args
		),

		rel_atom_args: $ => seq(
 			"(",
			commaSep($._expr),
			")"
		),

		comparison_atom: $ => seq(
			field("left_op", choice($.variable, $.constant)),
			field("comparison_operator", choice('=', '!=', '<', '<=', '>', '>=')),
			field("right_op", choice($.variable, $.constant)),
		),

		fd: $ => seq(
			"FD",
			$.predicate_name,
			":",
			field("LHS", commaSep($.attribute)),
			"->",
			field("RHS", commaSep($.attribute)),
			$.DOT
		),

		attribute: $ => $._IDENTIFIER,

		lineage: $ => seq(
			"LINEAGE",
			optional(
				seq(
					$.lineage_target_table,
					optional($.lineage_result_table)
				)
			),
			$.DOT
		),

		lineage_target_table: $ => seq("FOR", field("target",$.predicate_name)),

		lineage_result_table: $ => seq(
			"FOR", "RESULTS", "FROM", field("result_table",$.predicate_name)
		   ),

		answer_predicate: $ => seq(
			"ANS",
			":",
			$.predicate_name,
			$.DOT
		),

		_expr: $ => choice(
			prec.left(PREC.function,$.function_call),
			$.variable,
			$.binary_expr,
			$.constant,
            $.case_expr,
			seq('(', $._expr, ')')
		),

        case_expr: $ => seq(
            "CASE",
            repeat($.when_clause),
            optional(seq("ELSE", $._expr)),
            "END"
        ),

        when_clause: $ => seq(
            "WHEN",
            $._expr,
            "THEN",
            $._expr
        ),

		function_call: $ => seq(
			field("name", choice(
				$.agg_function,
				$.function_name
			)),
			$.function_args
		),

		function_args: $ => seq(
			"(",
			commaSep($._expr),
			")"
		),

		function_name: $ => choice(
			prec(2,$.agg_function),
			prec(1,$._IDENTIFIER)
		),

		agg_function: $ => choice("sum","avg","count","min","max"),

		predicate_name: $ => $._IDENTIFIER,

		variable: $ => $._IDENTIFIER,

		binary_expr: $ => {
			const table = [
				[PREC.concat, '||'],
				[PREC.comparative, choice('=', '!=', '<', '<=', '>', '>=')],
				[PREC.additive, choice('+', '-')],
				[PREC.multiplicative, choice('*', '/', '%')],
			];

			return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
				field('left', $._expr),
				field('operator', operator),
				field('right', $._expr),
			))));
		},

		constant: $ => choice(
			$.NUMBER,
			$.STRING
		),

		IMPL: $ => ":-",

		FLOAT: $ => /[-]?[0-9]+[.][0-9]+/,

		DOT: $ => /[.]/,

		INTEGER: $ => /[-]?[0-9]+/,

		NUMBER: $ => choice(
			$.INTEGER,
			prec(10,$.FLOAT)
		),

		STRING: $ => /[\'][^\']*[\']/,

		_IDENTIFIER: $ => /[a-zA-Z_][a-zA-Z_0-9]*/
	}
})

function commaSep1(rule) {
	return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
	return optional(commaSep1(rule))
}
