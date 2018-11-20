#include <stdio.h>


int fac(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result = result * i;
  }
  return result;
}


int main(void) {
  printf("%d", fac(5));
  printf("%d", fac(7));
  printf("%d", fac(9));
}
