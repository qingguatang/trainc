#include <stdio.h>


int my_strlen(char *str) {
  int len = 0;
  while (str[len]) {
    len++;
  }
  return len;
}

int my_strlen2(char *str) {
  char *p = str;
  while (*p++);
  return p - str - 1;
}

int main(void) {
  char *str = "abcde";
  printf("%d\n", my_strlen(str));
  printf("%d\n", my_strlen2(str));

  printf("%d\n", my_strlen(""));
  printf("%d\n", my_strlen2(""));
}
