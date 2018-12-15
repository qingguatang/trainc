#include <stdio.h>


#define f(x) ((x) * (x))   // 4+4 * 4+4


int main(void) {
  printf("%d\n", f(8));
  printf("%d\n", f(4+4));
}
