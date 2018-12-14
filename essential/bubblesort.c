#include <stdio.h>


void sort(int *array, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (array[j] > array[j + 1]) {
        // 交换
        int t = array[j];
        array[j] = array[j + 1];
        array[j + 1] = t;
      }
    }
  }
}

int main(void) {
  int array[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
  int len = sizeof(array) / sizeof(array[0]);
  sort(array, len);

  printf("排序后为:\n");
  for (int i = 0; i < len; i++) {
    printf("%d ", array[i]);
  }
}
