#include <stdio.h>
#include <string.h>


/**
 * 计算字符串的长度
 * 基于字符串其实是个字符数组
 */
int my_strlen(char str[]) {
  int i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return i;
}


/**
 * 计算字符串长度
 * 以指针方式来计算
 */
size_t my_strlen2(char *str) {
  char *p = str;
  while (*p) {
    p++;
  }
  return p - str;
}


int main(void) {
  char *a = "Hello C";
  char b[] = {'H', 'e', 'l', 'l', 'o', ' ', 'C', '\0'};

  printf("%s, 长度为：%d， 占用空间为: %d\n", a, my_strlen2(a), sizeof(a));
  printf("%s, 长度为：%d\n", a, strlen(b));
}


