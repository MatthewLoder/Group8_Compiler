#include <stdio.h>
#include <stdlib.h>

#include "lexer.h"

int main(int argc, char **argv) {
  Token *token_table;
  Lexer *lex = malloc(sizeof(Lexer));

  init_lexer(lex, "");

  token_table = malloc(lex->num_tokens * sizeof(Token));
  token_table[0] = (Token){.lexem = "int", .token = KEYWORD};
  printf("%s, %d\n", token_table[0].lexem, token_table[0].token);

  lex->num_tokens = 2;
  Token *temp = realloc(token_table, lex->num_tokens * sizeof(Token));
  token_table = temp;
  token_table[1] = (Token){.lexem = "x", .token = IDENT};
  printf("%s, %d\n", token_table[0].lexem, token_table[0].token);
  printf("%s, %d\n", token_table[1].lexem, token_table[1].token);

  free(token_table);
  free(lex);

  return 0;
}

void init_lexer(Lexer *lex, const char *input) {
  lex->input = NULL;
  lex->position = 0;
  lex->read_position = 0;
  lex->num_tokens = 1;
  lex->ch = 0;
}
