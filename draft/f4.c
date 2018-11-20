#include <stdio.h>


int swap(int a, int b) {
  int t = a;
  a = b;
  b = t;

  printf("在函数里面 a: %d, b: %d", a, b);
}


int swap2(int* a, int* b) {
  printf("a: %p, %d\n", a, *a);
  printf("b: %p, %d\n", a, *b);

//  *a = 111;
//  *b = 222;
  int t = *a;
  *a = *b;
  *b = t;
}


int main(void) {
//  printf("请输入两个数字\n");
//  int a;
//  int b;
//  scanf("%d %d", &a, &b);
//
//  if (a > b) {
//    swap(a, b);
//  }
//
//  printf("这两个数从小到大排列为: %d, %d", a, b);
  int a = 12;
  int b = 24;

  printf("a的地址为%p, 内容为%d\n", &a, a);
  printf("b的地址为%p, 内容为%d\n", &b, b);

  swap2(&a, &b);
  printf("在函数外面 a: %d, b: %d", a, b);
}
