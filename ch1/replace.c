#include <stdio.h>

int main(int argc, char const *argv[]) {
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\t')
      c = '\\t';
    if (c == '\b')
      c = '\\b';
    putchar(c);
  }
  return 0;
}