#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int sum(int *nums, int size) {
//  printf("size: %d\n", sizeof(nums));
  int s = 0;
  for (int i = 0; i < size; i++) {
    s += nums[i];
  }
  return s;
}

void *get_nums(int *list, int n) {
//  int list[n];
  for (int i = 0; i < n; i++) {
    list[i] = i;
  }
  return list;
}


void *init_rand_nums(int *list, int n) {
  for (int i = 0; i < n; i++) {
    list[i] = rand() % 10;
  }
}


void nums_to_str(char *buf, int *list, int n) {
  for (int i = 0; i < n; i++) {
    buf[i] = (char)('0' + list[i]);
  }
}

int main(void) {
//  int nums[] = {1, 2, 3, 4, 5};
//  int size = sizeof(nums) / sizeof(nums[0]);
//  int s = sum(nums, size);
//  printf("sum %d", s);

  int n = 6;

  int list[n];
  init_rand_nums(list, n);

  for (int j = 0; j < n; j++) {
    printf("%d ", list[j]);
    fflush(stdout);
  }
  for (int i = 0; i < 3; i++) {
    printf(".");
    fflush(stdout);
    usleep(1000 * 1000);
  }

  printf("\r                     ");

  char buf[n];
  nums_to_str(buf, list, n);
  printf("%s", buf);
}
