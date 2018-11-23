#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * 数组求和
 *
 * 传递数组其实只是传递了指针，所以要额外加一个大小的参数
 * 否则在函数内是取不到数组大小的
 */
int sum(int *nums, int size) {
  int s = 0;
  for (int i = 0; i < size; i++) {
    s += nums[i];
  }
  return s;
}

/**
 * ******** 注意 ******
 * 不能使用以下方法构造数组返回
 *
 * 应该在外部构造好数组，传递给函数使用
 * 见下面的函数 `init_rand_nums`
 */
void *get_nums(int n) {
  int list[n];
  for (int i = 0; i < n; i++) {
    list[i] = i;
  }
  return list;
}


/**
 * 使用随机数初始化list数组
 */
void *init_rand_nums(int *list, int n) {
  for (int i = 0; i < n; i++) {
    list[i] = rand() % 10;
  }
}


/**
 * int数组转化为字符串
 *
 * 这个函数结合了上面两个点：
 * 1. 数组作为参数时，还要传递数组的大小
 * 2. 要在调用时构造好数组，传递给函数使用
 */
void nums_to_str(char *buf, int *list, int n) {
  for (int i = 0; i < n; i++) {
    // 数字转成字符的小技巧
    buf[i] = (char)('0' + list[i]);
  }
}

int main(void) {
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
