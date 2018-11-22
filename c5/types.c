#include <stdio.h>


int main(void) {
  int a;
  long c;
  float b;
  double d;

  int *e;
  long *f;
  char *g;

  int h[100];
  int *i = h;

  printf("int %d\n", sizeof(a));
  printf("long %d\n", sizeof(b));
  printf("float %d\n", sizeof(c));
  printf("double %d\n", sizeof(d));
  printf("int* %d\n", sizeof(e));
  printf("long* %d\n", sizeof(f));
  printf("char* %d\n", sizeof(g));
  printf("h[100] %d\n", sizeof(h));
  printf("int* to array %d\n", sizeof(i));
}
