#include <stdio.h>



int main(void) {
  int x = 2, y = 3, z = 4;
  int m = !(x + y) + z - 1 && y + z % 2;
  printf("%d\n", m);
}
