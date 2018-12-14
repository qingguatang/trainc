#include <stdio.h>
#include <string.h>


void convert(char *str, char *buf) {
  int i = 0;
  while (str[i]) {
    if (str[i] > 'a' && str[i] < 'z') {
      buf[i] = str[i] - 'a' + 'A';
    } else if (str[i] > 'A' && str[i] < 'Z') {
      buf[i] = str[i] - 'A' + 'a';
    } else {
      // 其他的不变
      buf[i] = str[i];
    }
    i++;
  }

  // 字符串结尾
  buf[i] = '\0';
}


// 指针版本
void convert_ptr(char *str, char *buf) {
  while (*str) {
    if (*str > 'a' && *str < 'z') {
      *buf = *str - 'a' + 'A';     // 转化成大写
    } else if (*str > 'A' && *str < 'Z') {
      *buf = *str - 'A' + 'a';   // 转化成小写
    } else {
      *buf = *str;
    }

    str++;
    buf++;
  }

  *buf = '\0';
}


int main(void) {
  char str[] = "If we hold onto each other, we'll be better than before. ";
  char buf[sizeof(str)];

  convert(str, buf);
  printf("%s\n", buf);

  convert_ptr(buf, buf);
  printf("%s\n", buf);
}
