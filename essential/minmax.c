#include <stdio.h>


void minmax(int *array, int len, int *min, int *max) {
  *min = *max = array[0];

  for (int i = 1; i < len; i++) {
    if (array[i] < *min) {
      *min = array[i];
    }
    if (array[i] > *max) {
      *max = array[i];
    }
  }
}


int main(void) {
  int array[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
  int min;
  int max;
  int len = sizeof(array) / sizeof(*array);
  minmax(array, len, &min, &max);

  printf("最小值为 %d\n", min);
  printf("最大值为 %d\n", max);
}
