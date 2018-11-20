#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool is_palindrome(char *str) {
  char *front = str;
  char *end = str + strlen(str) - 1;
  while (front < end) {
    printf("%c, %c\n", *front, *end);
    if (*front != *end) {
      return false;
    }
    front++;
    end--;
  }
  return true;
}

int main(void) {
  char *str = "anna";
  if (is_palindrome(str)) {
    printf("%s 是回文", str);
  } else {
    printf("%s 不是回文", str);
  }
}


