#include <stdio.h>


int my_strlen(char *str) {
  int i = 0;
  while (*(str + i)) {
    i++;
  }
  return i;
}


int main(void) {
  printf("字符串的长度为: %d", my_strlen("Hello World"));
}
