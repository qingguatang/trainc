#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


void setvalue(int *a) {
//  a = 12;
  printf("%p ", a);  // 地址
  printf("%d ", *a);  // 取地址的内容
  *a = 12;
}


void get_two_random_numbers(int *a, int *b) {
  *a = rand() % 10;
  *b = rand() % 12;
}


int main(void) {
//  int a = 11;
//  setvalue(&a);
//  printf("%d", a);

//  int a;
//  int b;
//  scanf("%d %d", &a, &b);
//
//  if (a > b) {
//    swap(&a, &b);
//  }
//
//  printf("%d %d", a, b);

  int a;
  int b;
  get_two_random_numbers(&a, &b);
  printf("%d %d", a, b);
}


