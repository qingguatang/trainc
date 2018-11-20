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

void sort(int *list, int n) {
  for (int i = 0; i < n; i++) {
    int min = i;
    for (int k = i + 1; k < n; k++) {
      if (list[k] < list[min]) {
        min = k;
      }
    }
    swap(list, i, min);
  }
}


int comp(int *a, int *b) {
  return *a - *b;
}


int main(void) {
  srand(time(NULL));

  int n = 100 * 10000;
  int list[n];
  init_nums(list, n);

//  for (int i = 0; i < n; i++) {
//    printf("%d ", list[i]);
//  }

  int begin = clock();
//  sort(list, n);

//  printf("%p", comp);

  qsort(list, n, sizeof(int), comp);
  int end = clock();
  printf("\n");
  printf("cost %f s", 1.0 * (end - begin) / CLOCKS_PER_SEC);
  printf("\n");
//  for (int i = 0; i < n; i++) {
//    printf("%d ", list[i]);
//  }
}
