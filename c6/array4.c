#include <stdio.h>


int sum(int *array, int n) {
  int s = 0;
  for (int i = 0; i < n; i++) {
    s += array[i];
  }
  return s;
}

int main(void) {
  int a[] = {1,2,3,4,5,6,7,8,9,10};
  printf("%d\n", sum(a, 10));
}