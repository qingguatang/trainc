#include <stdio.h>


int comp(int a, int b) {
  return a - b;
}

int reverse_comp(int a, int b) {
  return b - a;
}

int reamin_comp(int a, int b) {
  return a % 10 - b % 10;
}


void sort(int *list, int n, int (*comp)(int a, int b)) {
  for (int i = 0; i < n - 1; i++) {
    int min = i;  // 保存最小元素的位置
    for (int j = i + 1; j < n; j++) {
      if (comp(list[j], list[min]) < 0) {
//      if (list[j] < list[min]) {
        min = j;
      }
    }
    // min
    // 0
    int t = list[i];
    list[i] = list[min];
    list[min] = t;
  }
}


void reverse_sort(int *list, int n) {
  for (int i = 0; i < n - 1; i++) {
    int min = i;  // 保存最小元素的位置
    for (int j = i + 1; j < n; j++) {
      if (list[j] >= list[min]) {
        min = j;
      }
    }
    // min
    // 0
    int t = list[i];
    list[i] = list[min];
    list[min] = t;
  }
}

int main(void) {
  int list[] = {41, 29, 38, 49, 12, 15};
  int len = sizeof(list) / sizeof(list[0]);

  sort(list, len, comp);

  for (int i = 0; i < len; i++) {
    printf("%d ", list[i]);
  }

  printf("\n");

  sort(list, len, reverse_comp);

  for (int i = 0; i < len; i++) {
    printf("%d ", list[i]);
  }

  printf("\n");
  sort(list, len, reamin_comp);

  for (int i = 0; i < len; i++) {
    printf("%d ", list[i]);
  }
}
