#include <stdio.h>


// int
// float
// int*
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


// int
// float
// int *
void set(int *p) {
//  printf("%p, 内容为：%d\n", p, *p);
  *p = 100;
}


int main(void) {
  printf("请输入两个数字：");
  int a;
  int b;
  scanf("%d %d", &a, &b);

  if (a > b){
    swap(&a, &b);
  }

  printf("%d %d", a, b);
}
