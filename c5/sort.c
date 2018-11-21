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
    for (int j = i + 1; j < n; j++) {
      if (list[j] < list[min]) {
        min = j;
      }
    }
    swap(list, i, min);
  }
}


int main(void) {
  srand(time(NULL));

  int n = 5 * 10000;
  int list[n];
  init_nums(list, n);

  int begin = clock();
  sort(list, n);
  int end = clock();

  printf("cost %f s", 1.0 * (end - begin) / CLOCKS_PER_SEC);
}
