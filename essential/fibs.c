#include <stdio.h>


int fibs(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return fibs(n - 2) + fibs(n - 1);
}

int main(void) {
  printf("%d\n", fibs(20));
}
