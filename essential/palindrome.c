#include <stdio.h>
#include <string.h>


int is_palindrome(char *str) {
  char *front = str;
  char *end = str + strlen(str) - 1;
  while (front < end) {
    if (*front != *end) {
      return 0;
    }
    front++;
    end--;
  }
  return 1;
}


int main(void) {
  printf("请输入一个字符串\n");
  char str[100];
  gets(str);
  if (is_palindrome(str)) {
    printf("%s 是回文", str);
  } else {
    printf("%s 不是回文", str);
  }
}
