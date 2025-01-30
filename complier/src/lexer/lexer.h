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
  char *lexem;
  TokenType token;
} Token;

int isKeyword(const char *str);
int isIdent(const char *str);
int isLiteral(const char *str);
int isOperator(const char *str);
int isPunctuation(const char *str);
int isConstant(const char *str);
int isSpecial(const char *str);
int isRemove(const char *str);

#endif
