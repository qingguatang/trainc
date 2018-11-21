#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void init_nums(int *list, int n) {
  for (int i = 0; i < n; i++) {
    list[i] = rand() % 10000;
  }
}

void swap(int *list, int i, int j) {
  int t = list[i];
  list[i] = list[j];
  list[j] = t;
}


int int_comp(int a, int b) {
  return a - b;
}

int remain_comp(int a, int b) {
  return a % 10 - b % 10;
}

int reverse_comp(int a, int b) {
  return b - a;
}


// int a
// float a
// long a

// int a[100]
// long a[100]

// int *a;
// char *a; 字符串

// char *a[]  // 相当于 char *(a[])

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

  int n = 100 * 10000;
//  int n = 10;
  int list[n];
  init_nums(list, n);

  int begin = clock();

//  sort(list, n, reverse_comp);
  qsort(list, n, sizeof(int), reverse_comp);

  int end = clock();

//  for (int i = 0; i < n; i++) {
//    printf("%d ", list[i]);
//  }

  printf("\ncost %f s", 1.0 * (end - begin) / CLOCKS_PER_SEC);
}
