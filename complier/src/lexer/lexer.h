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
  const char *lexem;
  TokenType token;
} Token;

Lexer *init_lexer(const char *input);
Token *add_token(Lexer *lex, Token *token_table, const char *token,
                 const TokenType tt);

#endif
