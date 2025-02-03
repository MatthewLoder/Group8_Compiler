#include <stdio.h>

#include "lexer.h"

int main(int argc, char **argv) {
  printf("Lexer Test\n");
  isKeyword("test");
  return 0;
}

int isKeyword(const char *str) {
  printf("%s\n", str);
  return 0;
}
