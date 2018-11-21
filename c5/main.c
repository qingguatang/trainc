#include <stdio.h>
#include <string.h>
#include <ctype.h>


int my_strlen(char str[]) {
  int i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return i;
}


int my_strlen2(char *str) {
  char *p = str;
  while (*p != '\0') {
    p++;
  }
  return p - str;
}


int is_palindrome(char *str) {
  char *start = str;
  char *end = str + my_strlen(str) - 1;
  while (start < end) {
    char a = *start;
    char b = *end;
    if (!isalpha(a)) {
      start++;
      continue; // ng
    }
    if (!isalpha(b)) {
      end--;
      continue;
    }

    a = (char)tolower(a);
    b = (char)tolower(b);

    if (a != b) {
      return 0;
    }
    start++;
    end--;
  }
  return 1;
}


int main(int argc, char *argv[]) {
  printf("%s\n", argv[0]);
  char *str = argv[1]; // "Was it a cat I saw?";
  if (is_palindrome(str)) {
    printf("%s是回文", str);
  } else {
    printf("%s不是回文", str);
  }
}
