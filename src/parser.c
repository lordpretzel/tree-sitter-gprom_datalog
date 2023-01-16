#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 20

enum {
  anon_sym_COMMA = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_FD = 4,
  anon_sym_COLON = 5,
  anon_sym_DASH_GT = 6,
  anon_sym_LINEAGE = 7,
  anon_sym_FOR = 8,
  anon_sym_RESULTS = 9,
  anon_sym_FROM = 10,
  anon_sym_ANS = 11,
  anon_sym_sum = 12,
  anon_sym_avg = 13,
  anon_sym_count = 14,
  anon_sym_min = 15,
  anon_sym_max = 16,
  anon_sym_PIPE_PIPE = 17,
  anon_sym_EQ_EQ = 18,
  anon_sym_BANG_EQ = 19,
  anon_sym_LT = 20,
  anon_sym_LT_EQ = 21,
  anon_sym_GT = 22,
  anon_sym_GT_EQ = 23,
  anon_sym_PLUS = 24,
  anon_sym_DASH = 25,
  anon_sym_STAR = 26,
  anon_sym_SLASH = 27,
  anon_sym_PERCENT = 28,
  anon_sym_DOT = 29,
  sym_STRING = 30,
  sym__INTEGER = 31,
  sym__IMPL = 32,
  sym__DOT = 33,
  sym__IDENTIFIER = 34,
  sym_source_file = 35,
  sym__statement = 36,
  sym_fact = 37,
  sym_rule = 38,
  sym__body_atom = 39,
  sym_rel_atom = 40,
  sym_fd = 41,
  sym_attribute = 42,
  sym_lineage = 43,
  sym_answer_predicate = 44,
  sym__expr = 45,
  sym_function_call = 46,
  sym_function_name = 47,
  sym_agg_function = 48,
  sym_predicate_name = 49,
  sym_variable = 50,
  sym_binary_expr = 51,
  sym_constant = 52,
  sym_NUMBER = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_rule_repeat1 = 55,
  aux_sym_rel_atom_repeat1 = 56,
  aux_sym_fd_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DOT] = ".",
  [sym_STRING] = "STRING",
  [sym__INTEGER] = "_INTEGER",
  [sym__IMPL] = "_IMPL",
  [sym__DOT] = "_DOT",
  [sym__IDENTIFIER] = "_IDENTIFIER",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_fact] = "fact",
  [sym_rule] = "rule",
  [sym__body_atom] = "_body_atom",
  [sym_rel_atom] = "rel_atom",
  [sym_fd] = "fd",
  [sym_attribute] = "attribute",
  [sym_lineage] = "lineage",
  [sym_answer_predicate] = "answer_predicate",
  [sym__expr] = "_expr",
  [sym_function_call] = "function_call",
  [sym_function_name] = "function_name",
  [sym_agg_function] = "agg_function",
  [sym_predicate_name] = "predicate_name",
  [sym_variable] = "variable",
  [sym_binary_expr] = "binary_expr",
  [sym_constant] = "constant",
  [sym_NUMBER] = "NUMBER",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_rel_atom_repeat1] = "rel_atom_repeat1",
  [aux_sym_fd_repeat1] = "fd_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_STRING] = sym_STRING,
  [sym__INTEGER] = sym__INTEGER,
  [sym__IMPL] = sym__IMPL,
  [sym__DOT] = sym__DOT,
  [sym__IDENTIFIER] = sym__IDENTIFIER,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_fact] = sym_fact,
  [sym_rule] = sym_rule,
  [sym__body_atom] = sym__body_atom,
  [sym_rel_atom] = sym_rel_atom,
  [sym_fd] = sym_fd,
  [sym_attribute] = sym_attribute,
  [sym_lineage] = sym_lineage,
  [sym_answer_predicate] = sym_answer_predicate,
  [sym__expr] = sym__expr,
  [sym_function_call] = sym_function_call,
  [sym_function_name] = sym_function_name,
  [sym_agg_function] = sym_agg_function,
  [sym_predicate_name] = sym_predicate_name,
  [sym_variable] = sym_variable,
  [sym_binary_expr] = sym_binary_expr,
  [sym_constant] = sym_constant,
  [sym_NUMBER] = sym_NUMBER,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_rel_atom_repeat1] = aux_sym_rel_atom_repeat1,
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
  [sym__IMPL] = {
    .visible = false,
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
  [aux_sym_rel_atom_repeat1] = {
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
  field_arg = 3,
  field_body = 4,
  field_head = 5,
  field_left = 6,
  field_name = 7,
  field_operator = 8,
  field_result_table = 9,
  field_right = 10,
  field_target = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_LHS] = "LHS",
  [field_RHS] = "RHS",
  [field_arg] = "arg",
  [field_body] = "body",
  [field_head] = "head",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_result_table] = "result_table",
  [field_right] = "right",
  [field_target] = "target",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 3},
  [16] = {.index = 27, .length = 3},
  [17] = {.index = 30, .length = 3},
  [18] = {.index = 33, .length = 2},
  [19] = {.index = 35, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_head, 0},
  [1] =
    {field_target, 2},
  [2] =
    {field_body, 2},
    {field_head, 0},
  [4] =
    {field_arg, 2},
  [5] =
    {field_body, 2},
    {field_body, 3},
    {field_head, 0},
  [8] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [11] =
    {field_arg, 2},
    {field_arg, 3},
  [13] =
    {field_name, 0},
  [14] =
    {field_RHS, 4},
  [15] =
    {field_LHS, 3},
  [16] =
    {field_arg, 2},
    {field_name, 0},
  [18] =
    {field_RHS, 4},
    {field_RHS, 5},
  [20] =
    {field_LHS, 3},
    {field_RHS, 5},
  [22] =
    {field_LHS, 3},
    {field_LHS, 4},
  [24] =
    {field_arg, 2},
    {field_arg, 3},
    {field_name, 0},
  [27] =
    {field_LHS, 3},
    {field_RHS, 5},
    {field_RHS, 6},
  [30] =
    {field_LHS, 3},
    {field_LHS, 4},
    {field_RHS, 6},
  [33] =
    {field_result_table, 6},
    {field_target, 2},
  [35] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'L') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'F') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(45);
      if (lookahead == 'O') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'G') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'M') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'S') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'S') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == '|') ADVANCE(66);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'F') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(89);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_FD);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_FD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LINEAGE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LINEAGE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RESULTS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_ANS);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_ANS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_avg);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_STRING);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__INTEGER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__IMPL);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__DOT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'A') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'D') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'E') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'E') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'G') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'I') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'N') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'N') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'S') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'g') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'u') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'u') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'v') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 40},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 40},
  [17] = {.lex_state = 40},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 40},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 40},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 40},
  [38] = {.lex_state = 40},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 40},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(95),
    [sym__statement] = STATE(28),
    [sym_fact] = STATE(28),
    [sym_rule] = STATE(28),
    [sym_rel_atom] = STATE(78),
    [sym_fd] = STATE(28),
    [sym_lineage] = STATE(28),
    [sym_answer_predicate] = STATE(28),
    [sym_predicate_name] = STATE(93),
    [aux_sym_source_file_repeat1] = STATE(28),
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
    STATE(27), 1,
      sym_NUMBER,
    STATE(94), 1,
      sym_agg_function,
    STATE(96), 1,
      sym_function_name,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(14), 5,
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
    STATE(27), 1,
      sym_NUMBER,
    STATE(94), 1,
      sym_agg_function,
    STATE(96), 1,
      sym_function_name,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(12), 5,
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
    STATE(27), 1,
      sym_NUMBER,
    STATE(94), 1,
      sym_agg_function,
    STATE(96), 1,
      sym_function_name,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(22), 5,
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
    STATE(27), 1,
      sym_NUMBER,
    STATE(94), 1,
      sym_agg_function,
    STATE(96), 1,
      sym_function_name,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(21), 5,
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
    STATE(27), 1,
      sym_NUMBER,
    STATE(94), 1,
      sym_agg_function,
    STATE(96), 1,
      sym_function_name,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(20), 5,
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
    STATE(27), 1,
      sym_NUMBER,
    STATE(94), 1,
      sym_agg_function,
    STATE(96), 1,
      sym_function_name,
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
    STATE(27), 1,
      sym_NUMBER,
    STATE(94), 1,
      sym_agg_function,
    STATE(96), 1,
      sym_function_name,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(26), 5,
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
    STATE(27), 1,
      sym_NUMBER,
    STATE(94), 1,
      sym_agg_function,
    STATE(96), 1,
      sym_function_name,
    ACTIONS(17), 5,
      anon_sym_sum,
      anon_sym_avg,
      anon_sym_count,
      anon_sym_min,
      anon_sym_max,
    STATE(30), 5,
      sym__expr,
      sym_function_call,
      sym_variable,
      sym_binary_expr,
      sym_constant,
  [342] = 3,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [364] = 3,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [386] = 8,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 1,
      anon_sym_PIPE_PIPE,
    STATE(53), 1,
      aux_sym_rel_atom_repeat1,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [418] = 3,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [440] = 8,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_rel_atom_repeat1,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [472] = 2,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [491] = 2,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [510] = 8,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_FD,
    ACTIONS(78), 1,
      anon_sym_LINEAGE,
    ACTIONS(81), 1,
      anon_sym_ANS,
    ACTIONS(84), 1,
      sym__IDENTIFIER,
    STATE(78), 1,
      sym_rel_atom,
    STATE(93), 1,
      sym_predicate_name,
    STATE(17), 7,
      sym__statement,
      sym_fact,
      sym_rule,
      sym_fd,
      sym_lineage,
      sym_answer_predicate,
      aux_sym_source_file_repeat1,
  [541] = 2,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [560] = 6,
    ACTIONS(47), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [587] = 4,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(93), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [610] = 5,
    ACTIONS(47), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(93), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [635] = 3,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(93), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [656] = 2,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [675] = 2,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [694] = 2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [713] = 2,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [732] = 2,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [751] = 8,
    ACTIONS(5), 1,
      anon_sym_FD,
    ACTIONS(7), 1,
      anon_sym_LINEAGE,
    ACTIONS(9), 1,
      anon_sym_ANS,
    ACTIONS(11), 1,
      sym__IDENTIFIER,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_rel_atom,
    STATE(93), 1,
      sym_predicate_name,
    STATE(17), 7,
      sym__statement,
      sym_fact,
      sym_rule,
      sym_fd,
      sym_lineage,
      sym_answer_predicate,
      aux_sym_source_file_repeat1,
  [782] = 2,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [801] = 6,
    ACTIONS(47), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [827] = 2,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [837] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [847] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [857] = 2,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [867] = 2,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [877] = 2,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [887] = 2,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [897] = 2,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [907] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [917] = 2,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [927] = 4,
    ACTIONS(157), 1,
      sym__DOT,
    ACTIONS(159), 1,
      sym__IDENTIFIER,
    STATE(93), 1,
      sym_predicate_name,
    STATE(70), 2,
      sym__body_atom,
      sym_rel_atom,
  [941] = 2,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [951] = 2,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [961] = 2,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [971] = 2,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [981] = 2,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [991] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1001] = 2,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 4,
      anon_sym_FD,
      anon_sym_LINEAGE,
      anon_sym_ANS,
      sym__IDENTIFIER,
  [1011] = 3,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_fd_repeat1,
    ACTIONS(192), 2,
      anon_sym_DASH_GT,
      sym__DOT,
  [1022] = 3,
    ACTIONS(159), 1,
      sym__IDENTIFIER,
    STATE(93), 1,
      sym_predicate_name,
    STATE(75), 2,
      sym__body_atom,
      sym_rel_atom,
  [1033] = 1,
    ACTIONS(194), 4,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_FOR,
      sym__DOT,
  [1040] = 1,
    ACTIONS(196), 3,
      anon_sym_COMMA,
      sym__IMPL,
      sym__DOT,
  [1046] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_rel_atom_repeat1,
  [1056] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      sym__DOT,
    STATE(49), 1,
      aux_sym_fd_repeat1,
  [1066] = 1,
    ACTIONS(204), 3,
      anon_sym_COMMA,
      sym__IMPL,
      sym__DOT,
  [1072] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      sym__DOT,
    STATE(74), 1,
      aux_sym_fd_repeat1,
  [1082] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      sym__DOT,
    STATE(54), 1,
      aux_sym_fd_repeat1,
  [1092] = 3,
    ACTIONS(210), 1,
      sym__DOT,
    ACTIONS(212), 1,
      sym__IDENTIFIER,
    STATE(66), 1,
      sym_attribute,
  [1102] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_DASH_GT,
    STATE(49), 1,
      aux_sym_fd_repeat1,
  [1112] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      sym__DOT,
    STATE(49), 1,
      aux_sym_fd_repeat1,
  [1122] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_rel_atom_repeat1,
  [1132] = 3,
    ACTIONS(212), 1,
      sym__IDENTIFIER,
    ACTIONS(220), 1,
      anon_sym_DASH_GT,
    STATE(67), 1,
      sym_attribute,
  [1142] = 3,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      sym__DOT,
    STATE(63), 1,
      aux_sym_rule_repeat1,
  [1152] = 3,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      sym__DOT,
    STATE(63), 1,
      aux_sym_rule_repeat1,
  [1162] = 3,
    ACTIONS(212), 1,
      sym__IDENTIFIER,
    ACTIONS(231), 1,
      sym__DOT,
    STATE(57), 1,
      sym_attribute,
  [1172] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      sym__DOT,
    STATE(60), 1,
      aux_sym_fd_repeat1,
  [1182] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_DASH_GT,
    STATE(59), 1,
      aux_sym_fd_repeat1,
  [1192] = 1,
    ACTIONS(237), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym__DOT,
  [1198] = 3,
    ACTIONS(212), 1,
      sym__IDENTIFIER,
    ACTIONS(239), 1,
      sym__DOT,
    STATE(56), 1,
      sym_attribute,
  [1208] = 3,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      sym__DOT,
    STATE(64), 1,
      aux_sym_rule_repeat1,
  [1218] = 1,
    ACTIONS(192), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym__DOT,
  [1224] = 1,
    ACTIONS(243), 3,
      anon_sym_COMMA,
      sym__IMPL,
      sym__DOT,
  [1230] = 3,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_rel_atom_repeat1,
  [1240] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      sym__DOT,
    STATE(49), 1,
      aux_sym_fd_repeat1,
  [1250] = 1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      sym__DOT,
  [1255] = 2,
    ACTIONS(250), 1,
      anon_sym_FOR,
    ACTIONS(252), 1,
      sym__DOT,
  [1262] = 2,
    ACTIONS(159), 1,
      sym__IDENTIFIER,
    STATE(90), 1,
      sym_predicate_name,
  [1269] = 2,
    ACTIONS(254), 1,
      sym__IMPL,
    ACTIONS(256), 1,
      sym__DOT,
  [1276] = 2,
    ACTIONS(212), 1,
      sym__IDENTIFIER,
    STATE(71), 1,
      sym_attribute,
  [1283] = 2,
    ACTIONS(159), 1,
      sym__IDENTIFIER,
    STATE(84), 1,
      sym_predicate_name,
  [1290] = 2,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(258), 1,
      sym__INTEGER,
  [1297] = 2,
    ACTIONS(159), 1,
      sym__IDENTIFIER,
    STATE(88), 1,
      sym_predicate_name,
  [1304] = 2,
    ACTIONS(159), 1,
      sym__IDENTIFIER,
    STATE(92), 1,
      sym_predicate_name,
  [1311] = 2,
    ACTIONS(260), 1,
      anon_sym_FOR,
    ACTIONS(262), 1,
      sym__DOT,
  [1318] = 1,
    ACTIONS(264), 1,
      anon_sym_RESULTS,
  [1322] = 1,
    ACTIONS(266), 1,
      sym__INTEGER,
  [1326] = 1,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
  [1330] = 1,
    ACTIONS(270), 1,
      sym__DOT,
  [1334] = 1,
    ACTIONS(272), 1,
      anon_sym_FROM,
  [1338] = 1,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [1342] = 1,
    ACTIONS(276), 1,
      sym__INTEGER,
  [1346] = 1,
    ACTIONS(278), 1,
      sym__DOT,
  [1350] = 1,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
  [1354] = 1,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
  [1358] = 1,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
  [1362] = 1,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
  [1366] = 1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [1370] = 1,
    ACTIONS(288), 1,
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
  [SMALL_STATE(11)] = 364,
  [SMALL_STATE(12)] = 386,
  [SMALL_STATE(13)] = 418,
  [SMALL_STATE(14)] = 440,
  [SMALL_STATE(15)] = 472,
  [SMALL_STATE(16)] = 491,
  [SMALL_STATE(17)] = 510,
  [SMALL_STATE(18)] = 541,
  [SMALL_STATE(19)] = 560,
  [SMALL_STATE(20)] = 587,
  [SMALL_STATE(21)] = 610,
  [SMALL_STATE(22)] = 635,
  [SMALL_STATE(23)] = 656,
  [SMALL_STATE(24)] = 675,
  [SMALL_STATE(25)] = 694,
  [SMALL_STATE(26)] = 713,
  [SMALL_STATE(27)] = 732,
  [SMALL_STATE(28)] = 751,
  [SMALL_STATE(29)] = 782,
  [SMALL_STATE(30)] = 801,
  [SMALL_STATE(31)] = 827,
  [SMALL_STATE(32)] = 837,
  [SMALL_STATE(33)] = 847,
  [SMALL_STATE(34)] = 857,
  [SMALL_STATE(35)] = 867,
  [SMALL_STATE(36)] = 877,
  [SMALL_STATE(37)] = 887,
  [SMALL_STATE(38)] = 897,
  [SMALL_STATE(39)] = 907,
  [SMALL_STATE(40)] = 917,
  [SMALL_STATE(41)] = 927,
  [SMALL_STATE(42)] = 941,
  [SMALL_STATE(43)] = 951,
  [SMALL_STATE(44)] = 961,
  [SMALL_STATE(45)] = 971,
  [SMALL_STATE(46)] = 981,
  [SMALL_STATE(47)] = 991,
  [SMALL_STATE(48)] = 1001,
  [SMALL_STATE(49)] = 1011,
  [SMALL_STATE(50)] = 1022,
  [SMALL_STATE(51)] = 1033,
  [SMALL_STATE(52)] = 1040,
  [SMALL_STATE(53)] = 1046,
  [SMALL_STATE(54)] = 1056,
  [SMALL_STATE(55)] = 1066,
  [SMALL_STATE(56)] = 1072,
  [SMALL_STATE(57)] = 1082,
  [SMALL_STATE(58)] = 1092,
  [SMALL_STATE(59)] = 1102,
  [SMALL_STATE(60)] = 1112,
  [SMALL_STATE(61)] = 1122,
  [SMALL_STATE(62)] = 1132,
  [SMALL_STATE(63)] = 1142,
  [SMALL_STATE(64)] = 1152,
  [SMALL_STATE(65)] = 1162,
  [SMALL_STATE(66)] = 1172,
  [SMALL_STATE(67)] = 1182,
  [SMALL_STATE(68)] = 1192,
  [SMALL_STATE(69)] = 1198,
  [SMALL_STATE(70)] = 1208,
  [SMALL_STATE(71)] = 1218,
  [SMALL_STATE(72)] = 1224,
  [SMALL_STATE(73)] = 1230,
  [SMALL_STATE(74)] = 1240,
  [SMALL_STATE(75)] = 1250,
  [SMALL_STATE(76)] = 1255,
  [SMALL_STATE(77)] = 1262,
  [SMALL_STATE(78)] = 1269,
  [SMALL_STATE(79)] = 1276,
  [SMALL_STATE(80)] = 1283,
  [SMALL_STATE(81)] = 1290,
  [SMALL_STATE(82)] = 1297,
  [SMALL_STATE(83)] = 1304,
  [SMALL_STATE(84)] = 1311,
  [SMALL_STATE(85)] = 1318,
  [SMALL_STATE(86)] = 1322,
  [SMALL_STATE(87)] = 1326,
  [SMALL_STATE(88)] = 1330,
  [SMALL_STATE(89)] = 1334,
  [SMALL_STATE(90)] = 1338,
  [SMALL_STATE(91)] = 1342,
  [SMALL_STATE(92)] = 1346,
  [SMALL_STATE(93)] = 1350,
  [SMALL_STATE(94)] = 1354,
  [SMALL_STATE(95)] = 1358,
  [SMALL_STATE(96)] = 1362,
  [SMALL_STATE(97)] = 1366,
  [SMALL_STATE(98)] = 1370,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMBER, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUMBER, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rel_atom_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 6),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 15),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 15),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 8),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineage, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 9, .production_id = 19),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 9, .production_id = 19),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 6, .production_id = 9),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 6, .production_id = 9),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 6, .production_id = 10),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 6, .production_id = 10),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage, 4, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineage, 4, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_answer_predicate, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_answer_predicate, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, .production_id = 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 5),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 7, .production_id = 12),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 7, .production_id = 12),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 7, .production_id = 13),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 7, .production_id = 13),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 7, .production_id = 14),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 7, .production_id = 14),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 8, .production_id = 16),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 8, .production_id = 16),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fd, 8, .production_id = 17),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fd, 8, .production_id = 17),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineage, 8, .production_id = 18),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineage, 8, .production_id = 18),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fd_repeat1, 2), SHIFT_REPEAT(79),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fd_repeat1, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_name, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom, 4, .production_id = 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(50),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_atom, 5, .production_id = 7),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rel_atom_repeat1, 2), SHIFT_REPEAT(7),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agg_function, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [282] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
