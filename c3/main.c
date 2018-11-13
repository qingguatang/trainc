#include <stdio.h>
#include <ctype.h>


int main(void) {
  int color = 0;
  while (1) {
    int ch = getchar();
    if (ch == EOF) {  // -1
      break;
    }
    if (isprint(ch)) {
      printf("\e[38;5;%dm%c\e[0m", color, ch);
      color = (color + 1) % 256;
    } else {
      putchar(ch);
    }
  }
}
