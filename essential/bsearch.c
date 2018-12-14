#include <stdio.h>


int bsearch(int *array, int n, int value) {
  int start = 0;
  int end = n - 1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (array[mid] == value) {
      return mid;
    }

    if (array[mid] > value) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  // 没找到
  return -1;
}


int main(void) {
  // 二分查找要求数据是有序的！！
  int array[] = { 3, 5, 9, 22, 32, 34, 35, 37, 50, 55, 64, 70, 82, 89};
  int len = sizeof(array) / sizeof(*array);

  for (int i = 0; i < 3; i++) {
    int value;
    printf("请输入要查找的数字:\n");
    scanf("%d", &value);

    int index = bsearch(array, len, value);

    if (index >= 0) {
      printf("找到了，位置为 %d\n", index);
    } else {
      printf("找不到\n");
    }
  }
}
