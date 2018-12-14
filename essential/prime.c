#include <stdio.h>
#include <math.h>


int is_prime(int num) {
  int n = (int)sqrt(num);
  for (int i = 2; i <= n; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}


int main(void) {
  // 找出100内的所有素数
  for (int i = 2; i < 100; i++) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }
}
