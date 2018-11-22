#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>


void print(int *list, int n);
bool contains(int *list, int n, int value);
void init_nums(int *list, int n);
void nums_to_str(char *buf, int *list, int n);
void clear();


int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = 6;
  if (argc == 2) {
    n = atoi(argv[1]);
  }

  int list[n];
  int t = 1;
  while (t) {
    // 初始化n个数字
    init_nums(list, n);
    // 打印出来，有简单的倒计时进度条哦
    print(list, n);
    // 消失
    clear();

    // 从控制台读入字符串
    char input[100];
    scanf("%s", input);

    // 将数据转换成字符串
    int str[n + 1];
    nums_to_str(str, list, n);

    // 直接比较字符串
    if (strcmp(input, str) == 0) {
      printf("正确！");
    } else {
      printf("错啦~");
    }

    fflush(stdout);
    usleep(1000 * 1000);
    clear();
  }
}


bool contains(int *list, int n, value) {
  for (int i = 0; i < n; i++) {
    if (list[i] == value) {
      return true;
    }
  }
  return false;
}


void init_nums(int *list, int n) {
  int index = 0;
  while (index < n) {
    int value = rand() % 10;
    if (!contains(list, index, value)) {
      list[index] = value;
      index++;
    }
  }
}


void print(int *list, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", list[i]);
  }
  fflush(stdout);
  for (int i = 0; i < 3; i++) {
    printf(".");
    fflush(stdout);
    usleep(1000 * 1000);
  }
}


void clear() {
  printf("\r%*s\r", 20, "");
  fflush(stdout);
}


void nums_to_str(char *buf, int *nums, int n) {
  for (int i = 0; i < n; i++) {
    buf[i] = (char)('0' + nums[i]);
  }
  buf[n] = '\0';
}

