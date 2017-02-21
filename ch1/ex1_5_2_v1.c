#include <stdio.h>

int count_char_v1();
int count_char_v2();

int main(int argc, char const *argv[]) {
  printf("v1: %ld\n", count_char_v1());
  printf("v2: %f\n", count_char_v2());
  return 0;
}

int count_char_v1() {
  long nc = 0;
  while (getchar() != EOF)
    ++nc;
  return nc;
}

int count_char_v2() {
  double nc;
  for (nc = 0; getchar() != EOF; ++nc)
    ;
  return nc;
}