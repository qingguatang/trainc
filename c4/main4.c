#include <stdio.h>


char *get_zodiac(int year) {
  static char *animals[] = {
    "鼠", "牛", "虎", "兔", "龙", "蛇",
    "马", "羊", "猴", "鸡", "狗", "猪"
  };

  // 1900
  int index = (year - 1900) % 12;
  char *zodiac = animals[index];

  return zodiac;
}

char *get_sign(int month, int day) {
  static char *signs[] = {
    "水瓶座",
    "双子座",
    "牡羊座",
    "金牛座",
    "双子座",
    "巨蟹座",
    "狮子座",
    "处女座",
    "天秤座",
    "天蝎座",
    "射手座",
    "摩羯座"
  };

  int sindex = month - 1;
  if (day < 21) {
    sindex--;
    if (sindex == 0) {
      sindex = 12;
    }
  }
  char *sign = signs[sindex];
  return sign;
}


int main(void) {
  printf("请输入你的生日：");

  int year;
  int month;
  int day;
  scanf("%d %d %d", &year, &month, &day);
  printf("你的生日为：%d年%d月%d日\n", year, month, day);

  char *animal = get_zodiac(year);
  printf("属%s", animal);

  char *sign = get_sign(month, day);

  printf(" %s", sign);
}
