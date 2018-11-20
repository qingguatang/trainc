#include <stdio.h>


int main(void) {
  int *i;   // i是一个指针，它指向的内容为int
  int j;
  printf("%d, %d", sizeof(i), sizeof(j));
}
