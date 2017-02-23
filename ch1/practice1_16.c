// practice 1-16 p22
// 打印长度大于80的所有输入行

#include <stdio.h>

#define FILETERED_LENGTH 80
#define MAXLINE 1000
#define MAXITEM 100

int getline(char line[], int max);
void copy(char to[], char from[]);

int main(int argc, char const *argv[]) {

  int len, nc;
  char valide[MAXITEM][MAXLINE];
  char current[MAXLINE];
  nc = 0;
  while ((len = getline(current, MAXLINE)) > 0) {
    if (len > 80) {
      copy
    }
  }

  return 0;
}

int getline(char s[], int lim) {
  int c, i;
  for (i = 0; i < lim - 1 && ((c = getchar()) != EOF && c != '\n'); ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}