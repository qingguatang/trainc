#include <stdio.h>


int sum(int *list, int n) {
  int s = 0;
  for (int i = 0; i < n; i++) {
    s += list[i];
  }
  return s;
}


int main(void) {
  printf("%p\n", sum);

  int list[] = {1,2,3,4,5};

  printf("%d\n",sum(list, 5));

  int (*p)(int *, int) = sum;
  printf("%d\n", p(list, 5));
  printf("%d\n", (*p)(list, 5));
}