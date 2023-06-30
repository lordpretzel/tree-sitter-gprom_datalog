#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 122
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
  anon_sym_DOT = 34,
  sym_STRING = 35,
  sym__INTEGER = 36,
  sym_IMPL = 37,
  sym_DOT = 38,
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
  [anon_sym_DOT] = ".",
  [sym_STRING] = "STRING",
  [sym__INTEGER] = "_INTEGER",
  [sym_IMPL] = "IMPL",
  [sym_DOT] = "DOT",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_STRING] = sym_STRING,
  [sym__INTEGER] = sym__INTEGER,
  [sym_IMPL] = sym_IMPL,
  [sym_DOT] = sym_DOT,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym__INTEGER] = {
    .visible = false,
    .named = true,
  },
  [sym_IMPL] = {
    .visible = true,
    .named = true,
  },
  [sym_DOT] = {
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
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(93);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'A') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(11);
      if (lookahead == 'E') ADVANCE(26);
      if (lookahead == 'F') ADVANCE(12);
      if (lookahead == 'L') ADVANCE(24);
      if (lookahead == 'R') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(22);
      if (lookahead == 'W') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(93);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(22);
      if (lookahead == 'W') ADVANCE(23);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(93);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(26);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(22);
      if (lookahead == 'W') ADVANCE(23);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == 'C') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(100);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(102);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(79);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'G') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(73);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 39:
      if (lookahead == 'S') ADVANCE(15);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 51:
      if (lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == '|') ADVANCE(92);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(93);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 'A') ADVANCE(112);
      if (lookahead == 'F') ADVANCE(106);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_FD);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_FD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LINEAGE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LINEAGE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RESULTS);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ANS);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ANS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_CASE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_WHEN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_avg);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__INTEGER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_IMPL);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_DOT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'A') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'A') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'D') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'E') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'E') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'E') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'G') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'I') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'N') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'N') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'S') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'S') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'g') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'u') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'u') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'v') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
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
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 54},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 54},
  [37] = {.lex_state = 54},
  [38] = {.lex_state = 54},
  [39] = {.lex_state = 54},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 54},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 54},
  [50] = {.lex_state = 54},
  [51] = {.lex_state = 54},
  [52] = {.lex_state = 54},
  [53] = {.lex_state = 54},
  [54] = {.lex_state = 54},
  [55] = {.lex_state = 54},
  [56] = {.lex_state = 54},
  [57] = {.lex_state = 54},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 54},
  [60] = {.lex_state = 54},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 54},
  [63] = {.lex_state = 54},
  [64] = {.lex_state = 54},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 54},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 54},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 54},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 54},
  [80] = {.lex_state = 54},
  [81] = {.lex_state = 54},
  [82] = {.lex_state = 54},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 54},
  [85] = {.lex_state = 54},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 54},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 54},
  [90] = {.lex_state = 54},
  [91] = {.lex_state = 54},
  [92] = {.lex_state = 54},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 54},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 54},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 54},
  [108] = {.lex_state = 54},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 54},
  [111] = {.lex_state = 54},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 54},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 54},
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
    [anon_sym_DOT] = ACTIONS(1),
    [sym_STRING] = ACTIONS(1),
    [sym__INTEGER] = ACTIONS(1),
    [sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(117),
    [sym__statement] = STATE(38),
    [sym_fact] = STATE(38),
    [sym_rule] = STATE(38),
    [sym_rel_atom] = STATE(107),
    [sym_fd] = STATE(38),
    [sym_lineage] = STATE(38),
    [sym_answer_predicate] = STATE(38),
    [sym_predicate_name] = STATE(106),
    [aux_sym_source_file_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_FD] = ACTIONS(5),
    [anon_sym_LINEAGE] = ACTIONS(7),
    [anon_sym_ANS] = ACTIONS(9),
    [sym__IDENTIFIER] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(100), 1,
      sym_agg_function,
    STATE(101), 1,
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
  [49] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_NUMBER,
    STATE(100), 1,
      sym_agg_function,
    STATE(101), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(34), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [98] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(100), 1,
      sym_agg_function,
    STATE(101), 1,
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
  [144] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(100), 1,
      sym_agg_function,
    STATE(101), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(35), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [190] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(100), 1,
      sym_agg_function,
    STATE(101), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(41), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [236] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(100), 1,
      sym_agg_function,
    STATE(101), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(44), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [282] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(100), 1,
      sym_agg_function,
    STATE(101), 1,
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
  [328] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(100), 1,
      sym_agg_function,
    STATE(101), 1,
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
  [374] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(100), 1,
      sym_agg_function,
    STATE(101), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(22), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [420] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(100), 1,
      sym_agg_function,
    STATE(101), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(42), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [466] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(100), 1,
      sym_agg_function,
    STATE(101), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(30), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [512] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(29), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(100), 1,
      sym_agg_function,
    STATE(101), 1,
      sym_function_name,
    ACTIONS(19), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(43), 6,
      sym__expr,
      sym_case_expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [558] = 3,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_DOT,
    ACTIONS(33), 16,
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
  [585] = 3,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_DOT,
    ACTIONS(39), 16,
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
  [612] = 2,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 17,
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
  [636] = 2,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 17,
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
  [660] = 3,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 16,
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
  [686] = 2,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 17,
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
  [710] = 2,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 17,
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
  [734] = 2,
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
  [757] = 4,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(67), 11,
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
  [784] = 2,
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
  [807] = 2,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 16,
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
  [830] = 2,
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
  [853] = 2,
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
  [876] = 2,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 16,
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
  [899] = 2,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 16,
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
  [922] = 2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 16,
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
  [945] = 2,
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
  [968] = 2,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 16,
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
  [991] = 5,
    ACTIONS(107), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(67), 10,
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
  [1020] = 3,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(67), 13,
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
  [1045] = 8,
    ACTIONS(107), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_rel_atom_args_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1077] = 6,
    ACTIONS(107), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(117), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1105] = 8,
    ACTIONS(107), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_rel_atom_args_repeat1,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1137] = 6,
    ACTIONS(107), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1164] = 8,
    ACTIONS(5), 1,
      anon_sym_FD,
    ACTIONS(7), 1,
      anon_sym_LINEAGE,
    ACTIONS(9), 1,
      anon_sym_ANS,
    ACTIONS(11), 1,
      sym__IDENTIFIER,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym_predicate_name,
    STATE(107), 1,
      sym_rel_atom,
    STATE(39), 7,
      sym__statement,
      sym_fact,
      sym_rule,
      sym_fd,
      sym_lineage,
      sym_answer_predicate,
      aux_sym_source_file_repeat1,
  [1195] = 8,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_FD,
    ACTIONS(130), 1,
      anon_sym_LINEAGE,
    ACTIONS(133), 1,
      anon_sym_ANS,
    ACTIONS(136), 1,
      sym__IDENTIFIER,
    STATE(106), 1,
      sym_predicate_name,
    STATE(107), 1,
      sym_rel_atom,
    STATE(39), 7,
      sym__statement,
      sym_fact,
      sym_rule,
      sym_fd,
      sym_lineage,
      sym_answer_predicate,
      aux_sym_source_file_repeat1,
  [1226] = 10,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(139), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(106), 1,
      sym_predicate_name,
    STATE(110), 1,
      sym_body,
    STATE(48), 2,
      sym_variable,
      sym_constant,
    STATE(90), 3,
      sym__body_atom,
      sym_rel_atom,
      sym_comparison_atom,
  [1260] = 6,
    ACTIONS(107), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(141), 1,
      anon_sym_THEN,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1286] = 6,
    ACTIONS(107), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1312] = 6,
    ACTIONS(107), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(145), 1,
      anon_sym_END,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1338] = 6,
    ACTIONS(107), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(147), 1,
      anon_sym_END,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1364] = 9,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(139), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(106), 1,
      sym_predicate_name,
    STATE(48), 2,
      sym_variable,
      sym_constant,
    STATE(103), 3,
      sym__body_atom,
      sym_rel_atom,
      sym_comparison_atom,
  [1395] = 7,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_STRING,
    ACTIONS(27), 1,
      sym__INTEGER,
    ACTIONS(149), 1,
      sym__IDENTIFIER,
    STATE(20), 1,
      sym_NUMBER,
    STATE(108), 2,
      sym_variable,
      sym_constant,
  [1418] = 3,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1432] = 2,
    ACTIONS(155), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1443] = 2,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1453] = 2,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1463] = 2,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1473] = 2,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1483] = 2,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1493] = 2,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1503] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1513] = 2,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1523] = 2,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1533] = 4,
    ACTIONS(193), 1,
      anon_sym_ELSE,
    ACTIONS(195), 1,
      anon_sym_END,
    ACTIONS(197), 1,
      anon_sym_WHEN,
    STATE(65), 2,
      sym_when_clause,
      aux_sym_case_expr_repeat1,
  [1547] = 2,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1557] = 2,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1567] = 4,
    ACTIONS(197), 1,
      anon_sym_WHEN,
    ACTIONS(207), 1,
      anon_sym_ELSE,
    ACTIONS(209), 1,
      anon_sym_END,
    STATE(58), 2,
      sym_when_clause,
      aux_sym_case_expr_repeat1,
  [1581] = 2,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1591] = 2,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1601] = 2,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1611] = 3,
    ACTIONS(225), 1,
      anon_sym_WHEN,
    ACTIONS(223), 2,
      anon_sym_ELSE,
      anon_sym_END,
    STATE(65), 2,
      sym_when_clause,
      aux_sym_case_expr_repeat1,
  [1623] = 2,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1633] = 1,
    ACTIONS(151), 4,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_FOR,
      sym_DOT,
  [1640] = 3,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_fd_repeat1,
    ACTIONS(235), 2,
      anon_sym_DASH_GT,
      sym_DOT,
  [1651] = 3,
    ACTIONS(237), 1,
      sym_DOT,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    STATE(80), 1,
      sym_attribute,
  [1661] = 3,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_rel_atom_args_repeat1,
  [1671] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      sym_DOT,
    STATE(87), 1,
      aux_sym_fd_repeat1,
  [1681] = 3,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    ACTIONS(247), 1,
      sym_DOT,
    STATE(71), 1,
      sym_attribute,
  [1691] = 3,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    ACTIONS(249), 1,
      sym_DOT,
    STATE(85), 1,
      sym_attribute,
  [1701] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    STATE(68), 1,
      aux_sym_fd_repeat1,
  [1711] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      sym_DOT,
    STATE(68), 1,
      aux_sym_fd_repeat1,
  [1721] = 1,
    ACTIONS(255), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_DOT,
  [1727] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_DASH_GT,
    STATE(74), 1,
      aux_sym_fd_repeat1,
  [1737] = 3,
    ACTIONS(259), 1,
      anon_sym_FOR,
    ACTIONS(261), 1,
      sym_DOT,
    STATE(94), 1,
      sym_lineage_target_table,
  [1747] = 3,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      sym_DOT,
    STATE(79), 1,
      aux_sym_body_repeat1,
  [1757] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      sym_DOT,
    STATE(75), 1,
      aux_sym_fd_repeat1,
  [1767] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      sym_DOT,
    STATE(68), 1,
      aux_sym_fd_repeat1,
  [1777] = 3,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      sym_DOT,
    STATE(79), 1,
      aux_sym_body_repeat1,
  [1787] = 3,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_rel_atom_args_repeat1,
  [1797] = 1,
    ACTIONS(278), 3,
      anon_sym_COMMA,
      sym_IMPL,
      sym_DOT,
  [1803] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      sym_DOT,
    STATE(81), 1,
      aux_sym_fd_repeat1,
  [1813] = 1,
    ACTIONS(235), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_DOT,
  [1819] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      sym_DOT,
    STATE(68), 1,
      aux_sym_fd_repeat1,
  [1829] = 3,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    ACTIONS(284), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      sym_attribute,
  [1839] = 1,
    ACTIONS(286), 3,
      anon_sym_COMMA,
      sym_IMPL,
      sym_DOT,
  [1845] = 3,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      sym_DOT,
    STATE(82), 1,
      aux_sym_body_repeat1,
  [1855] = 1,
    ACTIONS(290), 3,
      anon_sym_COMMA,
      sym_IMPL,
      sym_DOT,
  [1861] = 1,
    ACTIONS(292), 3,
      anon_sym_COMMA,
      sym_IMPL,
      sym_DOT,
  [1867] = 3,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_rel_atom_args_repeat1,
  [1877] = 3,
    ACTIONS(297), 1,
      anon_sym_FOR,
    ACTIONS(299), 1,
      sym_DOT,
    STATE(114), 1,
      sym_lineage_result_table,
  [1887] = 2,
    ACTIONS(301), 1,
      sym__IDENTIFIER,
    STATE(118), 1,
      sym_predicate_name,
  [1894] = 2,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      sym__INTEGER,
  [1901] = 2,
    ACTIONS(239), 1,
      sym__IDENTIFIER,
    STATE(86), 1,
      sym_attribute,
  [1908] = 1,
    ACTIONS(305), 2,
      anon_sym_FOR,
      sym_DOT,
  [1913] = 2,
    ACTIONS(301), 1,
      sym__IDENTIFIER,
    STATE(121), 1,
      sym_predicate_name,
  [1920] = 2,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_function_args,
  [1927] = 2,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_function_args,
  [1934] = 2,
    ACTIONS(301), 1,
      sym__IDENTIFIER,
    STATE(111), 1,
      sym_predicate_name,
  [1941] = 1,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      sym_DOT,
  [1946] = 2,
    ACTIONS(301), 1,
      sym__IDENTIFIER,
    STATE(98), 1,
      sym_predicate_name,
  [1953] = 1,
    ACTIONS(49), 2,
      anon_sym_COMMA,
      sym_DOT,
  [1958] = 2,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_rel_atom_args,
  [1965] = 2,
    ACTIONS(311), 1,
      sym_IMPL,
    ACTIONS(313), 1,
      sym_DOT,
  [1972] = 1,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      sym_DOT,
  [1977] = 1,
    ACTIONS(317), 1,
      anon_sym_RESULTS,
  [1981] = 1,
    ACTIONS(319), 1,
      sym_DOT,
  [1985] = 1,
    ACTIONS(321), 1,
      sym_DOT,
  [1989] = 1,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
  [1993] = 1,
    ACTIONS(325), 1,
      sym__INTEGER,
  [1997] = 1,
    ACTIONS(327), 1,
      sym_DOT,
  [2001] = 1,
    ACTIONS(329), 1,
      anon_sym_FROM,
  [2005] = 1,
    ACTIONS(331), 1,
      anon_sym_COLON,
  [2009] = 1,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
  [2013] = 1,
    ACTIONS(335), 1,
      anon_sym_COLON,
  [2017] = 1,
    ACTIONS(337), 1,
      sym__INTEGER,
  [2021] = 1,
    ACTIONS(339), 1,
      sym__INTEGER,
  [2025] = 1,
    ACTIONS(341), 1,
      sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 236,
  [SMALL_STATE(8)] = 282,
  [SMALL_STATE(9)] = 328,
  [SMALL_STATE(10)] = 374,
  [SMALL_STATE(11)] = 420,
  [SMALL_STATE(12)] = 466,
  [SMALL_STATE(13)] = 512,
  [SMALL_STATE(14)] = 558,
  [SMALL_STATE(15)] = 585,
  [SMALL_STATE(16)] = 612,
  [SMALL_STATE(17)] = 636,
  [SMALL_STATE(18)] = 660,
  [SMALL_STATE(19)] = 686,
  [SMALL_STATE(20)] = 710,
  [SMALL_STATE(21)] = 734,
  [SMALL_STATE(22)] = 757,
  [SMALL_STATE(23)] = 784,
  [SMALL_STATE(24)] = 807,
  [SMALL_STATE(25)] = 830,
  [SMALL_STATE(26)] = 853,
  [SMALL_STATE(27)] = 876,
  [SMALL_STATE(28)] = 899,
  [SMALL_STATE(29)] = 922,
  [SMALL_STATE(30)] = 945,
  [SMALL_STATE(31)] = 968,
  [SMALL_STATE(32)] = 991,
  [SMALL_STATE(33)] = 1020,
  [SMALL_STATE(34)] = 1045,
  [SMALL_STATE(35)] = 1077,
  [SMALL_STATE(36)] = 1105,
  [SMALL_STATE(37)] = 1137,
  [SMALL_STATE(38)] = 1164,
  [SMALL_STATE(39)] = 1195,
  [SMALL_STATE(40)] = 1226,
  [SMALL_STATE(41)] = 1260,
  [SMALL_STATE(42)] = 1286,
  [SMALL_STATE(43)] = 1312,
  [SMALL_STATE(44)] = 1338,
  [SMALL_STATE(45)] = 1364,
  [SMALL_STATE(46)] = 1395,
  [SMALL_STATE(47)] = 1418,
  [SMALL_STATE(48)] = 1432,
  [SMALL_STATE(49)] = 1443,
  [SMALL_STATE(50)] = 1453,
  [SMALL_STATE(51)] = 1463,
  [SMALL_STATE(52)] = 1473,
  [SMALL_STATE(53)] = 1483,
  [SMALL_STATE(54)] = 1493,
  [SMALL_STATE(55)] = 1503,
  [SMALL_STATE(56)] = 1513,
  [SMALL_STATE(57)] = 1523,
  [SMALL_STATE(58)] = 1533,
  [SMALL_STATE(59)] = 1547,
  [SMALL_STATE(60)] = 1557,
  [SMALL_STATE(61)] = 1567,
  [SMALL_STATE(62)] = 1581,
  [SMALL_STATE(63)] = 1591,
  [SMALL_STATE(64)] = 1601,
  [SMALL_STATE(65)] = 1611,
  [SMALL_STATE(66)] = 1623,
  [SMALL_STATE(67)] = 1633,
  [SMALL_STATE(68)] = 1640,
  [SMALL_STATE(69)] = 1651,
  [SMALL_STATE(70)] = 1661,
  [SMALL_STATE(71)] = 1671,
  [SMALL_STATE(72)] = 1681,
  [SMALL_STATE(73)] = 1691,
  [SMALL_STATE(74)] = 1701,
  [SMALL_STATE(75)] = 1711,
  [SMALL_STATE(76)] = 1721,
  [SMALL_STATE(77)] = 1727,
  [SMALL_STATE(78)] = 1737,
  [SMALL_STATE(79)] = 1747,
  [SMALL_STATE(80)] = 1757,
  [SMALL_STATE(81)] = 1767,
  [SMALL_STATE(82)] = 1777,
  [SMALL_STATE(83)] = 1787,
  [SMALL_STATE(84)] = 1797,
  [SMALL_STATE(85)] = 1803,
  [SMALL_STATE(86)] = 1813,
  [SMALL_STATE(87)] = 1819,
  [SMALL_STATE(88)] = 1829,
  [SMALL_STATE(89)] = 1839,
  [SMALL_STATE(90)] = 1845,
  [SMALL_STATE(91)] = 1855,
  [SMALL_STATE(92)] = 1861,
  [SMALL_STATE(93)] = 1867,
  [SMALL_STATE(94)] = 1877,
  [SMALL_STATE(95)] = 1887,
  [SMALL_STATE(96)] = 1894,
  [SMALL_STATE(97)] = 1901,
  [SMALL_STATE(98)] = 1908,
  [SMALL_STATE(99)] = 1913,
  [SMALL_STATE(100)] = 1920,
  [SMALL_STATE(101)] = 1927,
  [SMALL_STATE(102)] = 1934,
  [SMALL_STATE(103)] = 1941,
  [SMALL_STATE(104)] = 1946,
  [SMALL_STATE(105)] = 1953,
  [SMALL_STATE(106)] = 1958,
  [SMALL_STATE(107)] = 1965,
  [SMALL_STATE(108)] = 1972,
  [SMALL_STATE(109)] = 1977,
  [SMALL_STATE(110)] = 1981,
  [SMALL_STATE(111)] = 1985,
  [SMALL_STATE(112)] = 1989,
  [SMALL_STATE(113)] = 1993,
  [SMALL_STATE(114)] = 1997,
  [SMALL_STATE(115)] = 2001,
  [SMALL_STATE(116)] = 2005,
  [SMALL_STATE(117)] = 2009,
  [SMALL_STATE(118)] = 2013,
  [SMALL_STATE(119)] = 2017,
  [SMALL_STATE(120)] = 2021,
  [SMALL_STATE(121)] = 2025,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expr, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expr, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expr, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expr, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expr, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expr, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expr, 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expr, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_clause, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rel_atom_args_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_name, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 7, .production_id = 9),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 7, .production_id = 9),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 8, .production_id = 13),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 8, .production_id = 13),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 8, .production_id = 12),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 8, .production_id = 12),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 7, .production_id = 11),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 7, .production_id = 11),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineage, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_answer_predicate, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_answer_predicate, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 7, .production_id = 10),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 7, .production_id = 10),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 5),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 6, .production_id = 7),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 6, .production_id = 7),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 6, .production_id = 6),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 6, .production_id = 6),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineage, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 9, .production_id = 14),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 9, .production_id = 14),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expr_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expr_repeat1, 2), SHIFT_REPEAT(6),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineage, 3),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fd_repeat1, 2), SHIFT_REPEAT(97),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fd_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(45),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom_args, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom_args, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom_args, 4),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rel_atom_args_repeat1, 2), SHIFT_REPEAT(8),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage_target_table, 2, .production_id = 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_atom, 3, .production_id = 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agg_function, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [333] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage_result_table, 4, .production_id = 8),
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
