#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 15

enum {
  anon_sym_COMMA = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_EQ = 4,
  anon_sym_BANG_EQ = 5,
  anon_sym_LT = 6,
  anon_sym_LT_EQ = 7,
  anon_sym_GT = 8,
  anon_sym_GT_EQ = 9,
  anon_sym_FD = 10,
  anon_sym_COLON = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_LINEAGE = 13,
  anon_sym_FOR = 14,
  anon_sym_RESULTS = 15,
  anon_sym_FROM = 16,
  anon_sym_ANS = 17,
  anon_sym_CASE = 18,
  anon_sym_ELSE = 19,
  anon_sym_END = 20,
  anon_sym_WHEN = 21,
  anon_sym_THEN = 22,
  anon_sym_sum = 23,
  anon_sym_avg = 24,
  anon_sym_count = 25,
  anon_sym_min = 26,
  anon_sym_max = 27,
  anon_sym_PIPE_PIPE = 28,
  anon_sym_PLUS = 29,
  anon_sym_DASH = 30,
  anon_sym_STAR = 31,
  anon_sym_SLASH = 32,
  anon_sym_PERCENT = 33,
  sym_IMPL = 34,
  sym_FLOAT = 35,
  sym_DOT = 36,
  sym_INTEGER = 37,
  sym_STRING = 38,
  sym__IDENTIFIER = 39,
  sym_source_file = 40,
  sym__statement = 41,
  sym_fact = 42,
  sym_rule = 43,
  sym_body = 44,
  sym__body_atom = 45,
  sym_rel_atom = 46,
  sym_rel_atom_args = 47,
  sym_comparison_atom = 48,
  sym_fd = 49,
  sym_attribute = 50,
  sym_lineage = 51,
  sym_lineage_target_table = 52,
  sym_lineage_result_table = 53,
  sym_answer_predicate = 54,
  sym__expr = 55,
  sym_case_expr = 56,
  sym_when_clause = 57,
  sym_function_call = 58,
  sym_function_args = 59,
  sym_function_name = 60,
  sym_agg_function = 61,
  sym_predicate_name = 62,
  sym_variable = 63,
  sym_binary_expr = 64,
  sym_constant = 65,
  sym_NUMBER = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_body_repeat1 = 68,
  aux_sym_rel_atom_args_repeat1 = 69,
  aux_sym_fd_repeat1 = 70,
  aux_sym_case_expr_repeat1 = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_FD] = "FD",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LINEAGE] = "LINEAGE",
  [anon_sym_FOR] = "FOR",
  [anon_sym_RESULTS] = "RESULTS",
  [anon_sym_FROM] = "FROM",
  [anon_sym_ANS] = "ANS",
  [anon_sym_CASE] = "CASE",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_END] = "END",
  [anon_sym_WHEN] = "WHEN",
  [anon_sym_THEN] = "THEN",
  [anon_sym_sum] = "sum",
  [anon_sym_avg] = "avg",
  [anon_sym_count] = "count",
  [anon_sym_min] = "min",
  [anon_sym_max] = "max",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [sym_IMPL] = "IMPL",
  [sym_FLOAT] = "FLOAT",
  [sym_DOT] = "DOT",
  [sym_INTEGER] = "INTEGER",
  [sym_STRING] = "STRING",
  [sym__IDENTIFIER] = "_IDENTIFIER",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_fact] = "fact",
  [sym_rule] = "rule",
  [sym_body] = "body",
  [sym__body_atom] = "_body_atom",
  [sym_rel_atom] = "rel_atom",
  [sym_rel_atom_args] = "rel_atom_args",
  [sym_comparison_atom] = "comparison_atom",
  [sym_fd] = "fd",
  [sym_attribute] = "attribute",
  [sym_lineage] = "lineage",
  [sym_lineage_target_table] = "lineage_target_table",
  [sym_lineage_result_table] = "lineage_result_table",
  [sym_answer_predicate] = "answer_predicate",
  [sym__expr] = "_expr",
  [sym_case_expr] = "case_expr",
  [sym_when_clause] = "when_clause",
  [sym_function_call] = "function_call",
  [sym_function_args] = "function_args",
  [sym_function_name] = "function_name",
  [sym_agg_function] = "agg_function",
  [sym_predicate_name] = "predicate_name",
  [sym_variable] = "variable",
  [sym_binary_expr] = "binary_expr",
  [sym_constant] = "constant",
  [sym_NUMBER] = "NUMBER",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_rel_atom_args_repeat1] = "rel_atom_args_repeat1",
  [aux_sym_fd_repeat1] = "fd_repeat1",
  [aux_sym_case_expr_repeat1] = "case_expr_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_FD] = anon_sym_FD,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LINEAGE] = anon_sym_LINEAGE,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_RESULTS] = anon_sym_RESULTS,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_ANS] = anon_sym_ANS,
  [anon_sym_CASE] = anon_sym_CASE,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_WHEN] = anon_sym_WHEN,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_avg] = anon_sym_avg,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_IMPL] = sym_IMPL,
  [sym_FLOAT] = sym_FLOAT,
  [sym_DOT] = sym_DOT,
  [sym_INTEGER] = sym_INTEGER,
  [sym_STRING] = sym_STRING,
  [sym__IDENTIFIER] = sym__IDENTIFIER,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_fact] = sym_fact,
  [sym_rule] = sym_rule,
  [sym_body] = sym_body,
  [sym__body_atom] = sym__body_atom,
  [sym_rel_atom] = sym_rel_atom,
  [sym_rel_atom_args] = sym_rel_atom_args,
  [sym_comparison_atom] = sym_comparison_atom,
  [sym_fd] = sym_fd,
  [sym_attribute] = sym_attribute,
  [sym_lineage] = sym_lineage,
  [sym_lineage_target_table] = sym_lineage_target_table,
  [sym_lineage_result_table] = sym_lineage_result_table,
  [sym_answer_predicate] = sym_answer_predicate,
  [sym__expr] = sym__expr,
  [sym_case_expr] = sym_case_expr,
  [sym_when_clause] = sym_when_clause,
  [sym_function_call] = sym_function_call,
  [sym_function_args] = sym_function_args,
  [sym_function_name] = sym_function_name,
  [sym_agg_function] = sym_agg_function,
  [sym_predicate_name] = sym_predicate_name,
  [sym_variable] = sym_variable,
  [sym_binary_expr] = sym_binary_expr,
  [sym_constant] = sym_constant,
  [sym_NUMBER] = sym_NUMBER,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_rel_atom_args_repeat1] = aux_sym_rel_atom_args_repeat1,
  [aux_sym_fd_repeat1] = aux_sym_fd_repeat1,
  [aux_sym_case_expr_repeat1] = aux_sym_case_expr_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINEAGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RESULTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_avg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_IMPL] = {
    .visible = true,
    .named = true,
  },
  [sym_FLOAT] = {
    .visible = true,
    .named = true,
  },
  [sym_DOT] = {
    .visible = true,
    .named = true,
  },
  [sym_INTEGER] = {
    .visible = true,
    .named = true,
  },
  [sym_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym__IDENTIFIER] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__body_atom] = {
    .visible = false,
    .named = true,
  },
  [sym_rel_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_rel_atom_args] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_fd] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_lineage] = {
    .visible = true,
    .named = true,
  },
  [sym_lineage_target_table] = {
    .visible = true,
    .named = true,
  },
  [sym_lineage_result_table] = {
    .visible = true,
    .named = true,
  },
  [sym_answer_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_case_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_when_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_args] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_agg_function] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_name] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_NUMBER] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rel_atom_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fd_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_LHS = 1,
  field_RHS = 2,
  field_body = 3,
  field_comparison_operator = 4,
  field_head = 5,
  field_left = 6,
  field_left_op = 7,
  field_name = 8,
  field_operator = 9,
  field_result_table = 10,
  field_right = 11,
  field_right_op = 12,
  field_target = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_LHS] = "LHS",
  [field_RHS] = "RHS",
  [field_body] = "body",
  [field_comparison_operator] = "comparison_operator",
  [field_head] = "head",
  [field_left] = "left",
  [field_left_op] = "left_op",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_result_table] = "result_table",
  [field_right] = "right",
  [field_right_op] = "right_op",
  [field_target] = "target",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_target, 1},
  [1] =
    {field_body, 2},
    {field_head, 0},
  [3] =
    {field_name, 0},
  [4] =
    {field_comparison_operator, 1},
    {field_left_op, 0},
    {field_right_op, 2},
  [7] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [10] =
    {field_RHS, 4},
  [11] =
    {field_LHS, 3},
  [12] =
    {field_result_table, 3},
  [13] =
    {field_RHS, 4},
    {field_RHS, 5},
  [15] =
    {field_LHS, 3},
    {field_RHS, 5},
  [17] =
    {field_LHS, 3},
    {field_LHS, 4},
  [19] =
    {field_LHS, 3},
    {field_RHS, 5},
    {field_RHS, 6},
  [22] =
    {field_LHS, 3},
    {field_LHS, 4},
    {field_RHS, 6},
  [25] =
    {field_LHS, 3},
    {field_LHS, 4},
    {field_RHS, 6},
    {field_RHS, 7},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(91);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == 'C') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(24);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'L') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == '|') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(91);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(21);
      if (lookahead == '|') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == 'C') ADVANCE(103);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'H') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'H') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(79);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(78);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 32:
      if (lookahead == 'S') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'S') ADVANCE(70);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'U') ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == '|') ADVANCE(90);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(91);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == 'F') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == '|') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_FD);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_FD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LINEAGE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LINEAGE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RESULTS);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_ANS);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_ANS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_CASE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_WHEN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_avg);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_IMPL);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_FLOAT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_DOT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_INTEGER);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'A') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'A') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'D') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'E') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'E') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'E') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'G') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'I') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'N') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'N') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'S') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'S') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'g') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'u') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'u') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'v') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 52},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 52},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 52},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 52},
  [49] = {.lex_state = 52},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 52},
  [52] = {.lex_state = 52},
  [53] = {.lex_state = 52},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 52},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 52},
  [59] = {.lex_state = 52},
  [60] = {.lex_state = 52},
  [61] = {.lex_state = 52},
  [62] = {.lex_state = 52},
  [63] = {.lex_state = 52},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 52},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 52},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 52},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 52},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 52},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_FD] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LINEAGE] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_RESULTS] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_ANS] = ACTIONS(1),
    [anon_sym_CASE] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_WHEN] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_avg] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_DOT] = ACTIONS(1),
    [sym_STRING] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(111),
    [sym__statement] = STATE(35),
    [sym_fact] = STATE(35),
    [sym_rule] = STATE(35),
    [sym_rel_atom] = STATE(94),
    [sym_fd] = STATE(35),
    [sym_lineage] = STATE(35),
    [sym_answer_predicate] = STATE(35),
    [sym_predicate_name] = STATE(99),
    [aux_sym_source_file_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_FD] = ACTIONS(5),
    [anon_sym_LINEAGE] = ACTIONS(7),
    [anon_sym_ANS] = ACTIONS(9),
    [sym__IDENTIFIER] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(98), 1,
      sym_agg_function,
    STATE(100), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(31), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [46] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_NUMBER,
    STATE(98), 1,
      sym_agg_function,
    STATE(100), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(33), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [92] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(98), 1,
      sym_agg_function,
    STATE(100), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(32), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [135] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(98), 1,
      sym_agg_function,
    STATE(100), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(37), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [178] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(98), 1,
      sym_agg_function,
    STATE(100), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(21), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [221] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(98), 1,
      sym_agg_function,
    STATE(100), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(18), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [264] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(98), 1,
      sym_agg_function,
    STATE(100), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(27), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [307] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(98), 1,
      sym_agg_function,
    STATE(100), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(28), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [350] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(98), 1,
      sym_agg_function,
    STATE(100), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(36), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [393] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(98), 1,
      sym_agg_function,
    STATE(100), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(39), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [436] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(98), 1,
      sym_agg_function,
    STATE(100), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(40), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [479] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(98), 1,
      sym_agg_function,
    STATE(100), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(38), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [522] = 2,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_DOT,
  [546] = 3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [572] = 2,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_DOT,
  [596] = 2,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_DOT,
  [620] = 3,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(45), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [645] = 2,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [668] = 2,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [691] = 2,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [714] = 2,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [737] = 2,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [760] = 2,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [783] = 2,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [806] = 2,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [829] = 4,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(45), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
  [856] = 5,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(45), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
  [885] = 2,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [908] = 2,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_THEN,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [931] = 8,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_rel_atom_args_repeat1,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [963] = 6,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(99), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [991] = 8,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_rel_atom_args_repeat1,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1023] = 8,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_FD,
    ACTIONS(108), 1,
      anon_sym_LINEAGE,
    ACTIONS(111), 1,
      anon_sym_ANS,
    ACTIONS(114), 1,
      sym__IDENTIFIER,
    STATE(94), 1,
      sym_rel_atom,
    STATE(99), 1,
      sym_predicate_name,
    STATE(34), 7,
      sym__statement,
      sym_fact,
      sym_rule,
      sym_fd,
      sym_lineage,
      sym_answer_predicate,
      aux_sym_source_file_repeat1,
  [1054] = 8,
    ACTIONS(5), 1,
      anon_sym_FD,
    ACTIONS(7), 1,
      anon_sym_LINEAGE,
    ACTIONS(9), 1,
      anon_sym_ANS,
    ACTIONS(11), 1,
      sym__IDENTIFIER,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      sym_rel_atom,
    STATE(99), 1,
      sym_predicate_name,
    STATE(34), 7,
      sym__statement,
      sym_fact,
      sym_rule,
      sym_fd,
      sym_lineage,
      sym_answer_predicate,
      aux_sym_source_file_repeat1,
  [1085] = 6,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1112] = 6,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(121), 1,
      anon_sym_END,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1138] = 6,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1164] = 6,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(125), 1,
      anon_sym_THEN,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1190] = 6,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(127), 1,
      anon_sym_END,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1216] = 9,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(129), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(99), 1,
      sym_predicate_name,
    STATE(106), 1,
      sym_body,
    STATE(45), 2,
      sym_variable,
      sym_constant,
    STATE(77), 3,
      sym__body_atom,
      sym_rel_atom,
      sym_comparison_atom,
  [1247] = 8,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(129), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(99), 1,
      sym_predicate_name,
    STATE(45), 2,
      sym_variable,
      sym_constant,
    STATE(96), 3,
      sym__body_atom,
      sym_rel_atom,
      sym_comparison_atom,
  [1275] = 6,
    ACTIONS(21), 1,
      sym_FLOAT,
    ACTIONS(23), 1,
      sym_INTEGER,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(131), 1,
      sym__IDENTIFIER,
    STATE(14), 1,
      sym_NUMBER,
    STATE(92), 2,
      sym_variable,
      sym_constant,
  [1295] = 3,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1309] = 2,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1320] = 2,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1330] = 2,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1340] = 2,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1350] = 2,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1360] = 2,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1370] = 2,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1380] = 2,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1390] = 2,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1400] = 4,
    ACTIONS(171), 1,
      anon_sym_ELSE,
    ACTIONS(173), 1,
      anon_sym_END,
    ACTIONS(175), 1,
      anon_sym_WHEN,
    STATE(57), 2,
      sym_when_clause,
      aux_sym_case_expr_repeat1,
  [1414] = 4,
    ACTIONS(175), 1,
      anon_sym_WHEN,
    ACTIONS(177), 1,
      anon_sym_ELSE,
    ACTIONS(179), 1,
      anon_sym_END,
    STATE(54), 2,
      sym_when_clause,
      aux_sym_case_expr_repeat1,
  [1428] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1438] = 3,
    ACTIONS(187), 1,
      anon_sym_WHEN,
    ACTIONS(185), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(57), 2,
      sym_when_clause,
      aux_sym_case_expr_repeat1,
  [1450] = 2,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1460] = 2,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1470] = 2,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1480] = 2,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1490] = 2,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1500] = 2,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1510] = 3,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_fd_repeat1,
    ACTIONS(217), 2,
      anon_sym_DASH_GT,
      sym_DOT,
  [1521] = 1,
    ACTIONS(133), 4,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_FOR,
      sym_DOT,
  [1528] = 3,
    ACTIONS(219), 1,
      sym_DOT,
    ACTIONS(221), 1,
      sym__IDENTIFIER,
    STATE(84), 1,
      sym_attribute,
  [1538] = 1,
    ACTIONS(223), 3,
      anon_sym_COMMA,
      sym_IMPL,
      sym_DOT,
  [1544] = 3,
    ACTIONS(225), 1,
      anon_sym_FOR,
    ACTIONS(227), 1,
      sym_DOT,
    STATE(105), 1,
      sym_lineage_result_table,
  [1554] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_DASH_GT,
    STATE(64), 1,
      aux_sym_fd_repeat1,
  [1564] = 1,
    ACTIONS(233), 3,
      anon_sym_COMMA,
      sym_IMPL,
      sym_DOT,
  [1570] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      sym_DOT,
    STATE(64), 1,
      aux_sym_fd_repeat1,
  [1580] = 3,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      sym_DOT,
    STATE(72), 1,
      aux_sym_body_repeat1,
  [1590] = 3,
    ACTIONS(221), 1,
      sym__IDENTIFIER,
    ACTIONS(242), 1,
      anon_sym_DASH_GT,
    STATE(90), 1,
      sym_attribute,
  [1600] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      sym_DOT,
    STATE(71), 1,
      aux_sym_fd_repeat1,
  [1610] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      sym_DOT,
    STATE(64), 1,
      aux_sym_fd_repeat1,
  [1620] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      sym_DOT,
    STATE(91), 1,
      aux_sym_fd_repeat1,
  [1630] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      sym_DOT,
    STATE(88), 1,
      aux_sym_body_repeat1,
  [1640] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_rel_atom_args_repeat1,
  [1650] = 3,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_rel_atom_args_repeat1,
  [1660] = 3,
    ACTIONS(258), 1,
      anon_sym_FOR,
    ACTIONS(260), 1,
      sym_DOT,
    STATE(68), 1,
      sym_lineage_target_table,
  [1670] = 3,
    ACTIONS(221), 1,
      sym__IDENTIFIER,
    ACTIONS(262), 1,
      sym_DOT,
    STATE(76), 1,
      sym_attribute,
  [1680] = 1,
    ACTIONS(264), 3,
      anon_sym_COMMA,
      sym_IMPL,
      sym_DOT,
  [1686] = 3,
    ACTIONS(221), 1,
      sym__IDENTIFIER,
    ACTIONS(266), 1,
      sym_DOT,
    STATE(74), 1,
      sym_attribute,
  [1696] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      sym_DOT,
    STATE(75), 1,
      aux_sym_fd_repeat1,
  [1706] = 1,
    ACTIONS(270), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_DOT,
  [1712] = 1,
    ACTIONS(272), 3,
      anon_sym_COMMA,
      sym_IMPL,
      sym_DOT,
  [1718] = 3,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_rel_atom_args_repeat1,
  [1728] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      sym_DOT,
    STATE(72), 1,
      aux_sym_body_repeat1,
  [1738] = 1,
    ACTIONS(217), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_DOT,
  [1744] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_DASH_GT,
    STATE(69), 1,
      aux_sym_fd_repeat1,
  [1754] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      sym_DOT,
    STATE(64), 1,
      aux_sym_fd_repeat1,
  [1764] = 1,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      sym_DOT,
  [1769] = 2,
    ACTIONS(285), 1,
      sym__IDENTIFIER,
    STATE(108), 1,
      sym_predicate_name,
  [1776] = 2,
    ACTIONS(287), 1,
      sym_IMPL,
    ACTIONS(289), 1,
      sym_DOT,
  [1783] = 2,
    ACTIONS(285), 1,
      sym__IDENTIFIER,
    STATE(101), 1,
      sym_predicate_name,
  [1790] = 1,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      sym_DOT,
  [1795] = 1,
    ACTIONS(35), 2,
      anon_sym_COMMA,
      sym_DOT,
  [1800] = 2,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_function_args,
  [1807] = 2,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_rel_atom_args,
  [1814] = 2,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_function_args,
  [1821] = 1,
    ACTIONS(295), 2,
      anon_sym_FOR,
      sym_DOT,
  [1826] = 2,
    ACTIONS(285), 1,
      sym__IDENTIFIER,
    STATE(113), 1,
      sym_predicate_name,
  [1833] = 2,
    ACTIONS(221), 1,
      sym__IDENTIFIER,
    STATE(89), 1,
      sym_attribute,
  [1840] = 2,
    ACTIONS(285), 1,
      sym__IDENTIFIER,
    STATE(114), 1,
      sym_predicate_name,
  [1847] = 1,
    ACTIONS(297), 1,
      sym_DOT,
  [1851] = 1,
    ACTIONS(299), 1,
      sym_DOT,
  [1855] = 1,
    ACTIONS(301), 1,
      anon_sym_FROM,
  [1859] = 1,
    ACTIONS(303), 1,
      sym_DOT,
  [1863] = 1,
    ACTIONS(305), 1,
      anon_sym_COLON,
  [1867] = 1,
    ACTIONS(307), 1,
      anon_sym_RESULTS,
  [1871] = 1,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
  [1875] = 1,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
  [1879] = 1,
    ACTIONS(313), 1,
      sym_DOT,
  [1883] = 1,
    ACTIONS(315), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 221,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 307,
  [SMALL_STATE(10)] = 350,
  [SMALL_STATE(11)] = 393,
  [SMALL_STATE(12)] = 436,
  [SMALL_STATE(13)] = 479,
  [SMALL_STATE(14)] = 522,
  [SMALL_STATE(15)] = 546,
  [SMALL_STATE(16)] = 572,
  [SMALL_STATE(17)] = 596,
  [SMALL_STATE(18)] = 620,
  [SMALL_STATE(19)] = 645,
  [SMALL_STATE(20)] = 668,
  [SMALL_STATE(21)] = 691,
  [SMALL_STATE(22)] = 714,
  [SMALL_STATE(23)] = 737,
  [SMALL_STATE(24)] = 760,
  [SMALL_STATE(25)] = 783,
  [SMALL_STATE(26)] = 806,
  [SMALL_STATE(27)] = 829,
  [SMALL_STATE(28)] = 856,
  [SMALL_STATE(29)] = 885,
  [SMALL_STATE(30)] = 908,
  [SMALL_STATE(31)] = 931,
  [SMALL_STATE(32)] = 963,
  [SMALL_STATE(33)] = 991,
  [SMALL_STATE(34)] = 1023,
  [SMALL_STATE(35)] = 1054,
  [SMALL_STATE(36)] = 1085,
  [SMALL_STATE(37)] = 1112,
  [SMALL_STATE(38)] = 1138,
  [SMALL_STATE(39)] = 1164,
  [SMALL_STATE(40)] = 1190,
  [SMALL_STATE(41)] = 1216,
  [SMALL_STATE(42)] = 1247,
  [SMALL_STATE(43)] = 1275,
  [SMALL_STATE(44)] = 1295,
  [SMALL_STATE(45)] = 1309,
  [SMALL_STATE(46)] = 1320,
  [SMALL_STATE(47)] = 1330,
  [SMALL_STATE(48)] = 1340,
  [SMALL_STATE(49)] = 1350,
  [SMALL_STATE(50)] = 1360,
  [SMALL_STATE(51)] = 1370,
  [SMALL_STATE(52)] = 1380,
  [SMALL_STATE(53)] = 1390,
  [SMALL_STATE(54)] = 1400,
  [SMALL_STATE(55)] = 1414,
  [SMALL_STATE(56)] = 1428,
  [SMALL_STATE(57)] = 1438,
  [SMALL_STATE(58)] = 1450,
  [SMALL_STATE(59)] = 1460,
  [SMALL_STATE(60)] = 1470,
  [SMALL_STATE(61)] = 1480,
  [SMALL_STATE(62)] = 1490,
  [SMALL_STATE(63)] = 1500,
  [SMALL_STATE(64)] = 1510,
  [SMALL_STATE(65)] = 1521,
  [SMALL_STATE(66)] = 1528,
  [SMALL_STATE(67)] = 1538,
  [SMALL_STATE(68)] = 1544,
  [SMALL_STATE(69)] = 1554,
  [SMALL_STATE(70)] = 1564,
  [SMALL_STATE(71)] = 1570,
  [SMALL_STATE(72)] = 1580,
  [SMALL_STATE(73)] = 1590,
  [SMALL_STATE(74)] = 1600,
  [SMALL_STATE(75)] = 1610,
  [SMALL_STATE(76)] = 1620,
  [SMALL_STATE(77)] = 1630,
  [SMALL_STATE(78)] = 1640,
  [SMALL_STATE(79)] = 1650,
  [SMALL_STATE(80)] = 1660,
  [SMALL_STATE(81)] = 1670,
  [SMALL_STATE(82)] = 1680,
  [SMALL_STATE(83)] = 1686,
  [SMALL_STATE(84)] = 1696,
  [SMALL_STATE(85)] = 1706,
  [SMALL_STATE(86)] = 1712,
  [SMALL_STATE(87)] = 1718,
  [SMALL_STATE(88)] = 1728,
  [SMALL_STATE(89)] = 1738,
  [SMALL_STATE(90)] = 1744,
  [SMALL_STATE(91)] = 1754,
  [SMALL_STATE(92)] = 1764,
  [SMALL_STATE(93)] = 1769,
  [SMALL_STATE(94)] = 1776,
  [SMALL_STATE(95)] = 1783,
  [SMALL_STATE(96)] = 1790,
  [SMALL_STATE(97)] = 1795,
  [SMALL_STATE(98)] = 1800,
  [SMALL_STATE(99)] = 1807,
  [SMALL_STATE(100)] = 1814,
  [SMALL_STATE(101)] = 1821,
  [SMALL_STATE(102)] = 1826,
  [SMALL_STATE(103)] = 1833,
  [SMALL_STATE(104)] = 1840,
  [SMALL_STATE(105)] = 1847,
  [SMALL_STATE(106)] = 1851,
  [SMALL_STATE(107)] = 1855,
  [SMALL_STATE(108)] = 1859,
  [SMALL_STATE(109)] = 1863,
  [SMALL_STATE(110)] = 1867,
  [SMALL_STATE(111)] = 1871,
  [SMALL_STATE(112)] = 1875,
  [SMALL_STATE(113)] = 1879,
  [SMALL_STATE(114)] = 1883,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 5),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 5),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expr, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expr, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expr, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expr, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expr, 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expr, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expr, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expr, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_clause, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rel_atom_args_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_name, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 7, .production_id = 11),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 7, .production_id = 11),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 6, .production_id = 6),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 6, .production_id = 6),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineage, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_answer_predicate, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_answer_predicate, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 9, .production_id = 14),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 9, .production_id = 14),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 6, .production_id = 7),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 6, .production_id = 7),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineage, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 7, .production_id = 9),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 7, .production_id = 9),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expr_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expr_repeat1, 2), SHIFT_REPEAT(11),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 7, .production_id = 10),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 7, .production_id = 10),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineage, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 8, .production_id = 12),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 8, .production_id = 12),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 8, .production_id = 13),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 8, .production_id = 13),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 5),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 5),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fd_repeat1, 2), SHIFT_REPEAT(103),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fd_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom_args, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(42),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom_args, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom_args, 4),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rel_atom_args_repeat1, 2), SHIFT_REPEAT(10),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_atom, 3, .production_id = 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage_target_table, 2, .production_id = 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [309] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agg_function, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage_result_table, 4, .production_id = 8),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gprom_datalog(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
