#include <stdio.h>


// int
// float
// long
// int *
// 类型
void swap(int *a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// float
// int
void set(int *p) {
  printf("%p, 内容是%d\n", p, *p);
  *p = 100;
}


int main(void) {
//  int a = 1;
////  a = 2;
//  set(&a);
//  printf("%d, 房间号是%p", a, &a);
  printf("请输入两个数字？");
  int a;
  int b;
  scanf("%d %d", &a, &b);

  if (a > b) {
    swap(&a, &b);
//    int t = a;
//    a = b;
//    b = t;
  }

  printf("%d %d", a, b);
}
