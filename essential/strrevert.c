#include <stdio.h>
#include <string.h>


void revert(char *str) {
  char *start = str;
  char *end = str + strlen(str) - 1;

  while (start < end) {
    char t = *start;
    *start = *end;
    *end = t;

    start++;
    end--;
  }
}


int main(void) {
  // 注意，这里不能使用 char *str = ...
  char str[] = "If we hold onto each other, we'll be better than before. ";
  revert(str);
  printf("%s", str);
}
