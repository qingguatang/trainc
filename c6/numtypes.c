#include <stdio.h>
#include <math.h>


int main(void) {
  char a;
  short b;
  int c;
  long d;

  float e;
  double f;

  printf("char: %d\n", sizeof(a));
  printf("short: %d\n", sizeof(b));
  printf("int: %d\n", sizeof(c));
  printf("long: %d\n", sizeof(d));

  printf("float: %d\n", sizeof(e));
  printf("double: %d\n", sizeof(f));
}
