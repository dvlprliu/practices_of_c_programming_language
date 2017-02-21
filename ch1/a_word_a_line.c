// practice 1-12 p15
// 每行一个单词打印

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      putchar('\n');
    else
      putchar(c);
  }
  return 0;
}