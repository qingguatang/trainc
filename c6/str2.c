#include <stdio.h>
#include <string.h>


int main(void) {
  char a[7] = "a0\0a0\0";
  printf("%d\n", sizeof(a));
  printf("%d\n", strlen(a));
}
