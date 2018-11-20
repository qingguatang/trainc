#include <stdio.h>
#include <string.h>


int is_palindrome(char *str) {
  char *front = str;
  char *back = str + strlen(str) - 1;
  while (front < back) {
    if (*front != *back) {
      return 0;
    }
    front++;
    back--;
  }
  return 1;
}


int main(void) {
  char *str = "1234554321";
  if (is_palindrome(str)) {
    printf("%s 是回文", str);
  } else {
    printf("%s 不是回文", str);
  }
}
