#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


bool is_palindrome(char *str) {
  char *front = str;
  char *end = str + strlen(str) - 1;
  while (front < end) {
    char a = *front;
    char b = *end;

    if (!isalpha(a)) {
      front++;
      continue;
    }
    if (!isalpha(b)) {
      end--;
      continue;
    }

    a = (char)tolower(a);
    b = (char)tolower(b);

//    printf("%c, %c\n", a, b);
    if (a != b) {
      return false;
    }
    front++;
    end--;
  }
  return true;
}

int main(int argc, char *argv[]) {
  char *str = argv[1]; //"Madam, I'm Adam.";
  if (is_palindrome(str)) {
    printf("%s 是回文", str);
  } else {
    printf("%s 不是回文", str);
  }
}

