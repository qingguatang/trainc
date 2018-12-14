#include <stdio.h>

/**
 * 判断某一年是否为闰年
 * 闰年的规则为: 四年一闰，百年不闰，四百年一闰
 * 比如 2016年是闰年，2020年是闰年，2100年不是闰年，但是2400年是闰年
 */
int is_leapyear(int year) {
  return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

int main(void) {
  int year;

  int years[] = {2016, 2020, 2100, 2400};
  int size = sizeof(years) / sizeof(years[0]);

  for (int i = 0; i < size; i++) {
    if (is_leapyear(years[i])) {
      printf("%d年是闰年\n", years[i]);
    } else {
      printf("%d年不是闰年\n", years[i]);
    }
  }
}
