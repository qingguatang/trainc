#include <stdio.h>

// 数组版本
void revert(int *array, int len) {
  int start = 0;
  int end = len - 1;
  while (start < end) {
    int t = array[start];
    array[start] = array[end];
    array[end] = t;

    start++;
    end--;
  }
}

// 指针版本
void revert_ptr(int *array, int len) {
  int *start = array;
  int *end = array + len - 1;
  while (start < end) {
    int t = *start;
    *start = *end;
    *end = t;

    start++;
    end--;
  }
}


// 指针还是数组？
void revert_ptr2(int *array, int len) {
  int start = 0;
  int end = len - 1;
  while (start < end) {
    int t = *(array + start);
    array[start] = *(array + end);
    array[end] = t;

    start++;
    end--;
  }
}


void print_list(int *array, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}


int main(void) {
  int array[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
  int len = sizeof(array) / sizeof(array[0]);

  revert(array, len);
  print_list(array, len);

  revert_ptr(array, len);
  print_list(array, len);

  revert_ptr2(array, len);
  print_list(array, len);
}
