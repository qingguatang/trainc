#include <stdio.h>
#include <string.h>


/**
 * 统计字符串中的空格数
 */
int calc_space(char *str) {
  int len = strlen(str);
  int count = 0;
  for (int i = 0; i < len; i++) {
    if (str[i] == ' ') {
      count++;
    }
  }
  return count;
}


/**
 * 统计字符小写字母
 */
int calc_alpha(char *str) {
  int count = 0;
  while (*str++) {
    if (*str > 'a' && *str < 'z') {
      count++;
    }
  }
  return count;
}


int main(void) {
  char *str = "See the sunrise in the sky Kiss the sunset as we lie";
  printf("空格数为 %d\n", calc_space(str));

  printf("小写字母有%d个", calc_alpha(str));
}
