#include <stdio.h>
#include <string.h>


/**
 * 将一个字符串逆序
 */
void reverse(char *str) {
  char *start = str;
  char *end = str + strlen(str) - 1;
  while (start < end) {
    // swap
    char t = *start;
    *start = *end;
    *end = t;

    start++;
    end--;
  }
}


/**
 * 将十进制数字转换成16进制数
 * @param buf  转换好以字符串的形式存在buf中
 * @param num
 */
void to_hex(char *buf, int num) {
  char *hextable = "0123456789ABCDEF";
  int index = 0;
  while (num) {
    int remain = num % 16;
    buf[index++] = hextable[remain];
    num /= 16;
  }
  buf[index] = '\0';

  reverse(buf);
}


int main(void) {
  char buf[10];
  int num;

  printf("请输入一个十进制数：");
  scanf("%d", &num);

  to_hex(buf, num);
  printf("转换成16进制为：%s\n", buf);
}

