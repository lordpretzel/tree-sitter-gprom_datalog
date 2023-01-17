#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 17

enum {
  anon_sym_COMMA = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_EQ_EQ = 4,
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
  anon_sym_sum = 18,
  anon_sym_avg = 19,
  anon_sym_count = 20,
  anon_sym_min = 21,
  anon_sym_max = 22,
  anon_sym_PIPE_PIPE = 23,
  anon_sym_PLUS = 24,
  anon_sym_DASH = 25,
  anon_sym_STAR = 26,
  anon_sym_SLASH = 27,
  anon_sym_PERCENT = 28,
  anon_sym_DOT = 29,
  sym_STRING = 30,
  sym__INTEGER = 31,
  sym_IMPL = 32,
  sym__DOT = 33,
  sym__IDENTIFIER = 34,
  sym_source_file = 35,
  sym__statement = 36,
  sym_fact = 37,
  sym_rule = 38,
  sym__body_atom = 39,
  sym_rel_atom = 40,
  sym_rel_atom_args = 41,
  sym_comparison_atom = 42,
  sym_fd = 43,
  sym_attribute = 44,
  sym_lineage = 45,
  sym_lineage_target_table = 46,
  sym_lineage_result_table = 47,
  sym_answer_predicate = 48,
  sym__expr = 49,
  sym_function_call = 50,
  sym_function_args = 51,
  sym_function_name = 52,
  sym_agg_function = 53,
  sym_predicate_name = 54,
  sym_variable = 55,
  sym_binary_expr = 56,
  sym_constant = 57,
  sym_NUMBER = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_rule_repeat1 = 60,
  aux_sym_rel_atom_args_repeat1 = 61,
  aux_sym_fd_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ_EQ] = "==",
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
  [sym__DOT] = "_DOT",
  [sym__IDENTIFIER] = "_IDENTIFIER",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_fact] = "fact",
  [sym_rule] = "rule",
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
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_rel_atom_args_repeat1] = "rel_atom_args_repeat1",
  [aux_sym_fd_repeat1] = "fd_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
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
  [sym__DOT] = sym__DOT,
  [sym__IDENTIFIER] = sym__IDENTIFIER,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_fact] = sym_fact,
  [sym_rule] = sym_rule,
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
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_rel_atom_args_repeat1] = aux_sym_rel_atom_args_repeat1,
  [aux_sym_fd_repeat1] = aux_sym_fd_repeat1,
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
  [anon_sym_EQ_EQ] = {
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
  [sym__DOT] = {
    .visible = false,
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
  [aux_sym_rule_repeat1] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_target, 1},
  [1] =
    {field_head, 0},
  [2] =
    {field_body, 2},
    {field_head, 0},
  [4] =
    {field_name, 0},
  [5] =
    {field_body, 2},
    {field_body, 3},
    {field_head, 0},
  [8] =
    {field_comparison_operator, 1},
    {field_left_op, 0},
    {field_right_op, 2},
  [11] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [14] =
    {field_RHS, 4},
  [15] =
    {field_LHS, 3},
  [16] =
    {field_result_table, 3},
  [17] =
    {field_RHS, 4},
    {field_RHS, 5},
  [19] =
    {field_LHS, 3},
    {field_RHS, 5},
  [21] =
    {field_LHS, 3},
    {field_LHS, 4},
  [23] =
    {field_LHS, 3},
    {field_RHS, 5},
    {field_RHS, 6},
  [26] =
    {field_LHS, 3},
    {field_LHS, 4},
    {field_RHS, 6},
  [29] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(74);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 'L') ADVANCE(16);
      if (lookahead == 'R') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(74);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(21);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'O') ADVANCE(23);
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'G') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'U') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == '|') ADVANCE(73);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(74);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_FD);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_FD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LINEAGE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LINEAGE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RESULTS);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_ANS);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_ANS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_avg);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__INTEGER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_IMPL);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__DOT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'A') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'D') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'E') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'E') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'G') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'I') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'N') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'N') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'S') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'g') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'u') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'u') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'v') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 41},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 41},
  [20] = {.lex_state = 41},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 41},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 41},
  [26] = {.lex_state = 41},
  [27] = {.lex_state = 41},
  [28] = {.lex_state = 41},
  [29] = {.lex_state = 41},
  [30] = {.lex_state = 41},
  [31] = {.lex_state = 41},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 41},
  [38] = {.lex_state = 41},
  [39] = {.lex_state = 41},
  [40] = {.lex_state = 41},
  [41] = {.lex_state = 41},
  [42] = {.lex_state = 41},
  [43] = {.lex_state = 41},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 41},
  [46] = {.lex_state = 41},
  [47] = {.lex_state = 41},
  [48] = {.lex_state = 41},
  [49] = {.lex_state = 41},
  [50] = {.lex_state = 41},
  [51] = {.lex_state = 41},
  [52] = {.lex_state = 41},
  [53] = {.lex_state = 41},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
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
    [sym__DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(105),
    [sym__statement] = STATE(26),
    [sym_fact] = STATE(26),
    [sym_rule] = STATE(26),
    [sym_rel_atom] = STATE(85),
    [sym_fd] = STATE(26),
    [sym_lineage] = STATE(26),
    [sym_answer_predicate] = STATE(26),
    [sym_predicate_name] = STATE(89),
    [aux_sym_source_file_repeat1] = STATE(26),
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
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      sym_STRING,
    ACTIONS(25), 1,
      sym__INTEGER,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(17), 1,
      sym_NUMBER,
    STATE(91), 1,
      sym_function_name,
    STATE(94), 1,
      sym_agg_function,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(15), 5,
      sym__expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [45] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      sym_STRING,
    ACTIONS(25), 1,
      sym__INTEGER,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_NUMBER,
    STATE(91), 1,
      sym_function_name,
    STATE(94), 1,
      sym_agg_function,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(13), 5,
      sym__expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [90] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      sym_STRING,
    ACTIONS(25), 1,
      sym__INTEGER,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(17), 1,
      sym_NUMBER,
    STATE(91), 1,
      sym_function_name,
    STATE(94), 1,
      sym_agg_function,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(31), 5,
      sym__expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [132] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      sym_STRING,
    ACTIONS(25), 1,
      sym__INTEGER,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(17), 1,
      sym_NUMBER,
    STATE(91), 1,
      sym_function_name,
    STATE(94), 1,
      sym_agg_function,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(19), 5,
      sym__expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [174] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      sym_STRING,
    ACTIONS(25), 1,
      sym__INTEGER,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(17), 1,
      sym_NUMBER,
    STATE(91), 1,
      sym_function_name,
    STATE(94), 1,
      sym_agg_function,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(23), 5,
      sym__expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [216] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      sym_STRING,
    ACTIONS(25), 1,
      sym__INTEGER,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(17), 1,
      sym_NUMBER,
    STATE(91), 1,
      sym_function_name,
    STATE(94), 1,
      sym_agg_function,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(24), 5,
      sym__expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [258] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      sym_STRING,
    ACTIONS(25), 1,
      sym__INTEGER,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(17), 1,
      sym_NUMBER,
    STATE(91), 1,
      sym_function_name,
    STATE(94), 1,
      sym_agg_function,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(27), 5,
      sym__expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [300] = 11,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      sym_STRING,
    ACTIONS(25), 1,
      sym__INTEGER,
    ACTIONS(27), 1,
      sym__IDENTIFIER,
    STATE(17), 1,
      sym_NUMBER,
    STATE(91), 1,
      sym_function_name,
    STATE(94), 1,
      sym_agg_function,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(28), 5,
      sym__expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [342] = 3,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__DOT,
    ACTIONS(31), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [365] = 3,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__DOT,
    ACTIONS(37), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [388] = 2,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym__DOT,
  [408] = 8,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 1,
      anon_sym_PIPE_PIPE,
    STATE(71), 1,
      aux_sym_rel_atom_args_repeat1,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(51), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [440] = 3,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [462] = 8,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_rel_atom_args_repeat1,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(51), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [494] = 2,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym__DOT,
  [514] = 2,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym__DOT,
  [534] = 2,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym__DOT,
  [554] = 6,
    ACTIONS(55), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(51), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [581] = 2,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [600] = 2,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [619] = 2,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [638] = 5,
    ACTIONS(55), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(91), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [663] = 4,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(91), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
  [686] = 8,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      anon_sym_FD,
    ACTIONS(100), 1,
      anon_sym_LINEAGE,
    ACTIONS(103), 1,
      anon_sym_ANS,
    ACTIONS(106), 1,
      sym__IDENTIFIER,
    STATE(85), 1,
      sym_rel_atom,
    STATE(89), 1,
      sym_predicate_name,
    STATE(25), 7,
      sym__statement,
      sym_fact,
      sym_rule,
      sym_fd,
      sym_lineage,
      sym_answer_predicate,
      aux_sym_source_file_repeat1,
  [717] = 8,
    ACTIONS(5), 1,
      anon_sym_FD,
    ACTIONS(7), 1,
      anon_sym_LINEAGE,
    ACTIONS(9), 1,
      anon_sym_ANS,
    ACTIONS(11), 1,
      sym__IDENTIFIER,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_rel_atom,
    STATE(89), 1,
      sym_predicate_name,
    STATE(25), 7,
      sym__statement,
      sym_fact,
      sym_rule,
      sym_fd,
      sym_lineage,
      sym_answer_predicate,
      aux_sym_source_file_repeat1,
  [748] = 3,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(91), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [769] = 2,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [788] = 2,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [807] = 2,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [826] = 6,
    ACTIONS(55), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(59), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(51), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [852] = 10,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      sym_STRING,
    ACTIONS(25), 1,
      sym__INTEGER,
    ACTIONS(121), 1,
      sym__DOT,
    ACTIONS(123), 1,
      sym__IDENTIFIER,
    STATE(17), 1,
      sym_NUMBER,
    STATE(89), 1,
      sym_predicate_name,
    STATE(36), 2,
      sym_variable,
      sym_constant,
    STATE(60), 3,
      sym__body_atom,
      sym_rel_atom,
      sym_comparison_atom,
  [886] = 9,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      sym_STRING,
    ACTIONS(25), 1,
      sym__INTEGER,
    ACTIONS(123), 1,
      sym__IDENTIFIER,
    STATE(17), 1,
      sym_NUMBER,
    STATE(89), 1,
      sym_predicate_name,
    STATE(36), 2,
      sym_variable,
      sym_constant,
    STATE(83), 3,
      sym__body_atom,
      sym_rel_atom,
      sym_comparison_atom,
  [917] = 7,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      sym_STRING,
    ACTIONS(25), 1,
      sym__INTEGER,
    ACTIONS(125), 1,
      sym__IDENTIFIER,
    STATE(17), 1,
      sym_NUMBER,
    STATE(93), 2,
      sym_variable,
      sym_constant,
  [940] = 3,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [954] = 2,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [965] = 2,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [975] = 2,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [985] = 2,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [995] = 2,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1005] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1015] = 2,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1025] = 2,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1035] = 2,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1045] = 2,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1055] = 2,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1065] = 2,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1075] = 2,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1085] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1095] = 2,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1105] = 2,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1115] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1125] = 2,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1135] = 1,
    ACTIONS(127), 4,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_FOR,
      sym__DOT,
  [1142] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_fd_repeat1,
    ACTIONS(204), 2,
      anon_sym_DASH_GT,
      sym__DOT,
  [1153] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      sym__DOT,
    STATE(55), 1,
      aux_sym_fd_repeat1,
  [1163] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      sym__DOT,
    STATE(58), 1,
      aux_sym_fd_repeat1,
  [1173] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      sym__DOT,
    STATE(55), 1,
      aux_sym_fd_repeat1,
  [1183] = 1,
    ACTIONS(214), 3,
      anon_sym_COMMA,
      sym_IMPL,
      sym__DOT,
  [1189] = 3,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      sym__DOT,
    STATE(73), 1,
      aux_sym_rule_repeat1,
  [1199] = 1,
    ACTIONS(220), 3,
      anon_sym_COMMA,
      sym_IMPL,
      sym__DOT,
  [1205] = 3,
    ACTIONS(222), 1,
      anon_sym_DASH_GT,
    ACTIONS(224), 1,
      sym__IDENTIFIER,
    STATE(79), 1,
      sym_attribute,
  [1215] = 3,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_rel_atom_args_repeat1,
  [1225] = 1,
    ACTIONS(228), 3,
      anon_sym_COMMA,
      sym_IMPL,
      sym__DOT,
  [1231] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      sym__DOT,
    STATE(56), 1,
      aux_sym_fd_repeat1,
  [1241] = 3,
    ACTIONS(232), 1,
      anon_sym_FOR,
    ACTIONS(234), 1,
      sym__DOT,
    STATE(78), 1,
      sym_lineage_target_table,
  [1251] = 3,
    ACTIONS(224), 1,
      sym__IDENTIFIER,
    ACTIONS(236), 1,
      sym__DOT,
    STATE(77), 1,
      sym_attribute,
  [1261] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_DASH_GT,
    STATE(55), 1,
      aux_sym_fd_repeat1,
  [1271] = 1,
    ACTIONS(240), 3,
      anon_sym_COMMA,
      sym_IMPL,
      sym__DOT,
  [1277] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      sym__DOT,
    STATE(55), 1,
      aux_sym_fd_repeat1,
  [1287] = 3,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_rel_atom_args_repeat1,
  [1297] = 3,
    ACTIONS(224), 1,
      sym__IDENTIFIER,
    ACTIONS(246), 1,
      sym__DOT,
    STATE(65), 1,
      sym_attribute,
  [1307] = 3,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      sym__DOT,
    STATE(74), 1,
      aux_sym_rule_repeat1,
  [1317] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      sym__DOT,
    STATE(74), 1,
      aux_sym_rule_repeat1,
  [1327] = 1,
    ACTIONS(255), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym__DOT,
  [1333] = 3,
    ACTIONS(224), 1,
      sym__IDENTIFIER,
    ACTIONS(257), 1,
      sym__DOT,
    STATE(57), 1,
      sym_attribute,
  [1343] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      sym__DOT,
    STATE(70), 1,
      aux_sym_fd_repeat1,
  [1353] = 3,
    ACTIONS(261), 1,
      anon_sym_FOR,
    ACTIONS(263), 1,
      sym__DOT,
    STATE(98), 1,
      sym_lineage_result_table,
  [1363] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    STATE(68), 1,
      aux_sym_fd_repeat1,
  [1373] = 1,
    ACTIONS(204), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym__DOT,
  [1379] = 3,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_rel_atom_args_repeat1,
  [1389] = 2,
    ACTIONS(270), 1,
      sym__IDENTIFIER,
    STATE(99), 1,
      sym_predicate_name,
  [1396] = 1,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      sym__DOT,
  [1401] = 1,
    ACTIONS(272), 2,
      anon_sym_FOR,
      sym__DOT,
  [1406] = 2,
    ACTIONS(274), 1,
      sym_IMPL,
    ACTIONS(276), 1,
      sym__DOT,
  [1413] = 2,
    ACTIONS(224), 1,
      sym__IDENTIFIER,
    STATE(80), 1,
      sym_attribute,
  [1420] = 2,
    ACTIONS(270), 1,
      sym__IDENTIFIER,
    STATE(96), 1,
      sym_predicate_name,
  [1427] = 2,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(278), 1,
      sym__INTEGER,
  [1434] = 2,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_rel_atom_args,
  [1441] = 2,
    ACTIONS(270), 1,
      sym__IDENTIFIER,
    STATE(84), 1,
      sym_predicate_name,
  [1448] = 2,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_function_args,
  [1455] = 2,
    ACTIONS(270), 1,
      sym__IDENTIFIER,
    STATE(103), 1,
      sym_predicate_name,
  [1462] = 1,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      sym__DOT,
  [1467] = 2,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_function_args,
  [1474] = 1,
    ACTIONS(61), 2,
      anon_sym_COMMA,
      sym__DOT,
  [1479] = 1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [1483] = 1,
    ACTIONS(288), 1,
      anon_sym_COLON,
  [1487] = 1,
    ACTIONS(290), 1,
      sym__DOT,
  [1491] = 1,
    ACTIONS(292), 1,
      sym__DOT,
  [1495] = 1,
    ACTIONS(294), 1,
      sym__INTEGER,
  [1499] = 1,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
  [1503] = 1,
    ACTIONS(298), 1,
      sym__INTEGER,
  [1507] = 1,
    ACTIONS(300), 1,
      sym__DOT,
  [1511] = 1,
    ACTIONS(302), 1,
      anon_sym_FROM,
  [1515] = 1,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
  [1519] = 1,
    ACTIONS(306), 1,
      anon_sym_RESULTS,
  [1523] = 1,
    ACTIONS(308), 1,
      sym__INTEGER,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 174,
  [SMALL_STATE(7)] = 216,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 300,
  [SMALL_STATE(10)] = 342,
  [SMALL_STATE(11)] = 365,
  [SMALL_STATE(12)] = 388,
  [SMALL_STATE(13)] = 408,
  [SMALL_STATE(14)] = 440,
  [SMALL_STATE(15)] = 462,
  [SMALL_STATE(16)] = 494,
  [SMALL_STATE(17)] = 514,
  [SMALL_STATE(18)] = 534,
  [SMALL_STATE(19)] = 554,
  [SMALL_STATE(20)] = 581,
  [SMALL_STATE(21)] = 600,
  [SMALL_STATE(22)] = 619,
  [SMALL_STATE(23)] = 638,
  [SMALL_STATE(24)] = 663,
  [SMALL_STATE(25)] = 686,
  [SMALL_STATE(26)] = 717,
  [SMALL_STATE(27)] = 748,
  [SMALL_STATE(28)] = 769,
  [SMALL_STATE(29)] = 788,
  [SMALL_STATE(30)] = 807,
  [SMALL_STATE(31)] = 826,
  [SMALL_STATE(32)] = 852,
  [SMALL_STATE(33)] = 886,
  [SMALL_STATE(34)] = 917,
  [SMALL_STATE(35)] = 940,
  [SMALL_STATE(36)] = 954,
  [SMALL_STATE(37)] = 965,
  [SMALL_STATE(38)] = 975,
  [SMALL_STATE(39)] = 985,
  [SMALL_STATE(40)] = 995,
  [SMALL_STATE(41)] = 1005,
  [SMALL_STATE(42)] = 1015,
  [SMALL_STATE(43)] = 1025,
  [SMALL_STATE(44)] = 1035,
  [SMALL_STATE(45)] = 1045,
  [SMALL_STATE(46)] = 1055,
  [SMALL_STATE(47)] = 1065,
  [SMALL_STATE(48)] = 1075,
  [SMALL_STATE(49)] = 1085,
  [SMALL_STATE(50)] = 1095,
  [SMALL_STATE(51)] = 1105,
  [SMALL_STATE(52)] = 1115,
  [SMALL_STATE(53)] = 1125,
  [SMALL_STATE(54)] = 1135,
  [SMALL_STATE(55)] = 1142,
  [SMALL_STATE(56)] = 1153,
  [SMALL_STATE(57)] = 1163,
  [SMALL_STATE(58)] = 1173,
  [SMALL_STATE(59)] = 1183,
  [SMALL_STATE(60)] = 1189,
  [SMALL_STATE(61)] = 1199,
  [SMALL_STATE(62)] = 1205,
  [SMALL_STATE(63)] = 1215,
  [SMALL_STATE(64)] = 1225,
  [SMALL_STATE(65)] = 1231,
  [SMALL_STATE(66)] = 1241,
  [SMALL_STATE(67)] = 1251,
  [SMALL_STATE(68)] = 1261,
  [SMALL_STATE(69)] = 1271,
  [SMALL_STATE(70)] = 1277,
  [SMALL_STATE(71)] = 1287,
  [SMALL_STATE(72)] = 1297,
  [SMALL_STATE(73)] = 1307,
  [SMALL_STATE(74)] = 1317,
  [SMALL_STATE(75)] = 1327,
  [SMALL_STATE(76)] = 1333,
  [SMALL_STATE(77)] = 1343,
  [SMALL_STATE(78)] = 1353,
  [SMALL_STATE(79)] = 1363,
  [SMALL_STATE(80)] = 1373,
  [SMALL_STATE(81)] = 1379,
  [SMALL_STATE(82)] = 1389,
  [SMALL_STATE(83)] = 1396,
  [SMALL_STATE(84)] = 1401,
  [SMALL_STATE(85)] = 1406,
  [SMALL_STATE(86)] = 1413,
  [SMALL_STATE(87)] = 1420,
  [SMALL_STATE(88)] = 1427,
  [SMALL_STATE(89)] = 1434,
  [SMALL_STATE(90)] = 1441,
  [SMALL_STATE(91)] = 1448,
  [SMALL_STATE(92)] = 1455,
  [SMALL_STATE(93)] = 1462,
  [SMALL_STATE(94)] = 1467,
  [SMALL_STATE(95)] = 1474,
  [SMALL_STATE(96)] = 1479,
  [SMALL_STATE(97)] = 1483,
  [SMALL_STATE(98)] = 1487,
  [SMALL_STATE(99)] = 1491,
  [SMALL_STATE(100)] = 1495,
  [SMALL_STATE(101)] = 1499,
  [SMALL_STATE(102)] = 1503,
  [SMALL_STATE(103)] = 1507,
  [SMALL_STATE(104)] = 1511,
  [SMALL_STATE(105)] = 1515,
  [SMALL_STATE(106)] = 1519,
  [SMALL_STATE(107)] = 1523,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rel_atom_args_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 7),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 7),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_name, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 8, .production_id = 14),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 8, .production_id = 14),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 7, .production_id = 13),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 7, .production_id = 13),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 7, .production_id = 12),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 7, .production_id = 12),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 7, .production_id = 11),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 7, .production_id = 11),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 6, .production_id = 9),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 6, .production_id = 9),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 6, .production_id = 8),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 6, .production_id = 8),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineage, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineage, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_answer_predicate, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_answer_predicate, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 9, .production_id = 16),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 9, .production_id = 16),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 8, .production_id = 15),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 8, .production_id = 15),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineage, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 5),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 5),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fd_repeat1, 2), SHIFT_REPEAT(86),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fd_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom_args, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom_args, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom_args, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(33),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rel_atom_args_repeat1, 2), SHIFT_REPEAT(5),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage_target_table, 2, .production_id = 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_atom, 3, .production_id = 6),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage_result_table, 4, .production_id = 10),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agg_function, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [304] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
