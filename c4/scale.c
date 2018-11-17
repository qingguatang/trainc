#include <stdio.h>


char *get60char(char *buf, int num) {
  int dec = num / 10;
  int unit = num % 10;
//  printf("%d %d", dec, unit);
  int cur = 0;
  for (int i = 0; i < dec; i++) {
    buf[cur] = '<';
    cur++;
  }
  if (unit == 0) {
    buf[cur] = 'X';
    cur++;
  }
  for (int j = 0; j < unit; j++) {
    buf[cur] = 'Y';
    cur++;
  }
  buf[cur] = '\0';

  return buf;
}


int main(void) {
  int num = 1000000;

  int list[100];  // 假设我们的数字不超过100位60进制
  int count = 0;
  int next = num;
  while (next > 0) {
    int remain = next % 60;
    list[count++] = remain;
    next = next / 60;
  }

  printf("%d 转化成巴比伦语：", num);
  for (int i = 0; i < count; i++) {
    char buf[100];
    get60char(buf, list[count - i - 1]);
    printf("%s ", buf);
  }
}
