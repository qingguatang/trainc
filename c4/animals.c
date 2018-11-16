#include <stdio.h>


char *getAnimal(int year) {
  static char *animals[] = {
    "鼠", "牛", "虎", "兔", "龙", "蛇",
    "马", "羊", "猴", "鸡", "狗", "猪"
  };

  int start = 1900;  // 这一年属鼠

  int index = (year - start) % 12;
  char *zodiac = animals[index];
  return zodiac;
}

char *getSign(int month, int day) {
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
    if (sindex < 0) {
      sindex = 11;
    }
  }

  return signs[sindex];
}


int main(void) {
  int year;
  int month;
  int day;

  printf("你的生日是？");
  scanf("%d %d %d", &year, &month, &day);

  printf("%d年%d月%d日 ", year, month, day);

  char *zodiac = getAnimal(year);
  printf("属%s", zodiac);

  char *sign = getSign(month, day);
  printf(" %s", sign);

  char *sky[] = {"甲", "乙", "丙", "丁", "戊", "己", "庚", "辛", "壬", "癸"};
  char *ground[] = {"子", "丑", "寅", "卯", "辰", "巳", "午", "未", "申", "酉", "戌", "亥"};
  int index = year - 4;
  int k = 0;
  int j = 0;
  for (int i = 0; i < index; i++) {
    k = (k + 1) % 10;
    j = (j + 1) % 12;
  }

  // 函数返回两个值呢?
  printf(" %s%s年", sky[k], ground[j]);
}


