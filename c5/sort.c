#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * 以随机数初始化数组list
 */
void init_nums(int *list, int n) {
  for (int i = 0; i < n; i++) {
    list[i] = rand() % 10000;
  }
}

/**
 * 交换数组中i和j两个位置的元素
 */
void swap(int *list, int i, int j) {
  int t = list[i];
  list[i] = list[j];
  list[j] = t;
}


/**
 * 比较函数，从小到大排列
 */
int int_comp(int a, int b) {
  return a - b;
}

/**
 * 比较函数，从大小到排列
 */
int reverse_comp(int a, int b) {
  return b - a;
}

/**
 * 比较函数，根据最后一位数字排序
 */
int remain_comp(int a, int b) {
  return a % 10 - b % 10;
}


/**
 * 选择排序
 */
void sort(int *list, int n, int (*comp)(int, int)) {
  for (int i = 0; i < n; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (comp(list[j], list[min]) < 0) {
        min = j;
      }
    }
    swap(list, i, min);
  }
}


int main(void) {
  srand(time(NULL));

  int n = 1 * 10000;
  int list[n];
  init_nums(list, n);

  int begin = clock();

  sort(list, n, reverse_comp);
//  sort(list, n, remain_comp);

  // 采用标准库qsort排序，会非常快
//  qsort(list, n, sizeof(int), reverse_comp);

  int end = clock();

//  for (int i = 0; i < n; i++) {
//    printf("%d ", list[i]);
//  }

  printf("\n共花费了 %f s", 1.0 * (end - begin) / CLOCKS_PER_SEC);
}
