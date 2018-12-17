#include <stdio.h>


int my_strlen(char *str) {
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }
  return len;
}

int my_strlen2(char *str) {
  char *p = str;
  while (*p) {
    p++;
  }
  return p - str;
}

int main(void) {
  char *str = "abcde";
  printf("%d\n", my_strlen(str));
  printf("%d\n", my_strlen2(str));

  printf("%d\n", my_strlen(""));
  printf("%d\n", my_strlen2(""));
}
