#include <stdio.h>


int main(void) {
  int a;      // 一个整形

  int * b;    // 一个指针, 批向一个整形 (整形指针)

  int * c();  // 一个函数, 反回一个整形指针

  int * d[10];  // 一个数组, 里面存放着整形指针

  int (*e)();  // 一个指针, 指向一个函数, 该函数返回整形

  int (*f)[];   // 一个指针, 指向一个数组, 数组里放着整形



  // 复杂一点点
  int ** (*g)();


  // 以下例子来自于Expert C Programming

  char *(*h[10])(int **p);
  void (*signal(int sig, void(*func)(int)))(int);
}
