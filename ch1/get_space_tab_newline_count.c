// practices 1-8 p13
// 统计空格 制表符与换行符个数

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int ch, count;
  while ((ch = getchar()) != EOF) {
    if (ch == '\n' || ch == '\t' || ch == '\r')
      count++;
  }
  printf("%d\n", count);
  return 0;
}