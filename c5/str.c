#include <stdio.h>
#include <string.h>


int my_strlen(char str[]) {
  int i = 0;
  while (str[i]) {
    i++;
  }
  return i;
}


size_t my_strlen2(char *str) {
  char *p = str;
  while (*p) {
    p++;
  }
  return p - str;
}


int main(void) {
  char *a = "Hello C";
  char b[] = {'H', 'e', 'l', 'l', 'o', ' ', 'C', '\0'};

  printf("%s, 长度为：%d\n", a, my_strlen2(a));
  printf("%s, 长度为：%d\n", a, strlen(b));
}


