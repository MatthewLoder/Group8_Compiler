#include <stdio.h>

#include "lexer.h"

int main(int argc, char **argv) {
  printf("Lexer Test");
  isKeyword("test");
  return 0;
}

int isKeyword(const char *str) {
  printf("test");
  return 0;
}
