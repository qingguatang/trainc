#include <stdio.h>


void printGroup(int type) {
  for (int color = 0; color < 255; color++) {
    printf("\e[%d;5;%dm Hello \e[0m", type, color);
  }
}


int main(void) {
  printGroup(38);
  printGroup(48);
}
