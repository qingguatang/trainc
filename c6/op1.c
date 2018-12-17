#include <stdio.h>


int main(void) {
  int x = 0, y = 0, z = 0;
  ++x || (++y && ++z);

//  (y++ && ++z) || ++x;

  printf("%d\n", x);
  printf("%d\n", y);
  printf("%d\n", z);
}
