#include <stdio.h>


// 两个作用
void printGroup(int from, int to);


int main(void) {
  printGroup(40, 47);
  printGroup(100, 107);
  printGroup(49, 49);
}


void printGroup(int from, int to) {
  for (int bg = from; bg <= to; bg++) {
    for (int fg = 30; fg <= 37; fg++) {
      int attrs[] = {0, 1, 2, 4, 5, 7};
      for (int attr = 0; attr < sizeof(attrs) / sizeof(attrs[0]); attr++) {
        printf("\e[%d;%d;%dm ^[%d;%d;%dm \e[0m", attr, bg, fg, attr, bg, fg);
      }
      printf("\n");
    }
  }
}


