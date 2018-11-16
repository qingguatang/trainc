#include <stdio.h>


int main(void) {
  int year;
  int month;
  int day;

  printf("你的生日是？");
  scanf("%d %d %d", &year, &month, &day);

  printf("%d年%d月%d日 ", year, month, day);

  char *animals[] = {
    "鼠", "牛", "虎", "兔", "龙", "蛇",
    "马", "羊", "猴", "鸡", "狗", "猪"
  };

  int start = 1900;  // 这一年属鼠

  int index = (year - start) % 12;
  char *zodiac = animals[index];
  printf("属%s", zodiac);
}
