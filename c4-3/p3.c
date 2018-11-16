#include <stdio.h>


int sum(int list[], int n) {
  int result = 0;
  for (int i = 0; i < n; i++) {
    result += list[i];
  }
  return result;
}


int main(void) {
  int list[] = {1, 2, 3, 4, 5};
  int len = sizeof(list) / sizeof(list[0]);
  printf("%d", sum(list, len));
}
