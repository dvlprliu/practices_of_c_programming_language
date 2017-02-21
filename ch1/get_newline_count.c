// example 1.5.3 p13
// 统计输入中的行数

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int nl, c;
  nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
  }
  printf("%d\n", nl);
  return 0;
}