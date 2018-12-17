#include <stdio.h>


int main(void) {
  int i = 1, j = 2, k = 3;
  if (i++==1&&(++j==3||k++==3)) {
    printf("%d %d %d\n", i, j, k);
  }

//  int m = 0;
//  if (m=1) {
//    printf("ok");
//  }

//  int x = 1, y, z;
//  z = y = x + 1;
//
//  printf("%d\n", z);
//
//  z*=y<<=x+=1;
//  printf("%d\n", y);
//  printf("%d\n", z);


//  int a = 1, b = 2, c = 3, d = 4;
//  a < b ? a : c < d ? c : d;
}

