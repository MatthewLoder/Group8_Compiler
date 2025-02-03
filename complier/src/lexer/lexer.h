#ifndef LEXER_H_
#define LEXER_H_

typedef enum {
  KEYWORD,     // Compiler specific word
  IDENT,       // Identifiers
  LITERAL,     // String literals
  OPERATORS,   // Arithmatic operators
  PUNCTUATION, // Punctuation and delimeters
  CONSTANTS,   // Number constants
  SPECIAL,     // _ and &
  REMOVE,      // Whitespace and comments
  ILLEGAL,     // Unknown lexemes and illegal symbols
} TokenType;

typedef struct {
  char *input;
  int position;
  int read_position;
  int num_tokens;
  unsigned int ch;
} Lexer;

typedef struct {
  char *lexem;
  TokenType token;
} Token;

// TODO: add input too nex_lexer
void init_lexer(Lexer *lex, const char *input);
void add_token(Lexer *lex, const char *token, const TokenType tt);

#endif
