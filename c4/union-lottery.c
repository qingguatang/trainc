#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int guessNum(int max) {
  int num = 1 + rand() % max;
  return num;
}


int main(void) {
  // 6个红球  1-33
  // 1个蓝球  1-16
  srand(time(NULL));

  for (int i = 0; i < 6; i++) {
    int num = guessNum(33);
    printf("%02d ", num);
  }
}
