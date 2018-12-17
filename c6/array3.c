#include <stdio.h>


int sum(int *a) {
  a[0] = a[-1] + a[1];
}


int main(void) {
  int a[] = {1,2,3,4,5,6,7,8,9,10};
  sum(&a[2]);
  printf("%d", *(a+2));
}
