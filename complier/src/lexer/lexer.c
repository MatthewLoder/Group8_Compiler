#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lexer.h"

int main(int argc, char **argv) {
  Token *token_table = NULL;
  Lexer *lex = init_lexer("");

  if (!lex) {
    fprintf(stderr, "Failed to initialize lexer\n");
    return 1;
  }

  token_table = add_token(lex, token_table, "x", IDENT);

  if (!token_table) {
    fprintf(stderr, "Failed to add token\n");
    free(lex);
    return 1;
  }

  token_table = add_token(lex, token_table, "int", KEYWORD);

  if (!token_table) {
    fprintf(stderr, "Failed to add token\n");
    free(lex);
    return 1;
  }

  printf("%s, %d\n", token_table[0].lexem, token_table[0].token);
  printf("%s, %d\n", token_table[1].lexem, token_table[1].token);

  free(token_table);
  free(lex);

  return 0;
}
Lexer *init_lexer(const char *input) {
  Lexer *lex = malloc(sizeof(Lexer));

  if (!lex) {
    fprintf(stderr, "Memory allocation failed for lex\n");
    return NULL;
  }

  lex->input = NULL;
  lex->position = 0;
  lex->read_position = 0;
  lex->num_tokens = 0;
  lex->ch = 0;
  return lex;
}

Token *add_token(Lexer *lex, Token *token_table, const char *lexem,
                 TokenType tt) {
  Token *temp = realloc(token_table, (lex->num_tokens + 1) * sizeof(Token));
  if (!temp) {
    fprintf(stderr, "Memory reallocation failed\n");
    free(token_table);
    return NULL;
  }
  token_table = temp;

  token_table[lex->num_tokens].lexem = strdup(lexem);
  if (!token_table[lex->num_tokens].lexem) {
    fprintf(stderr, "String duplication failed\n");
    return NULL;
  }

  token_table[lex->num_tokens].token = tt;
  lex->num_tokens++;

  return token_table;
}
