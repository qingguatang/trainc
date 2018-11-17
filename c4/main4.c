#include <stdio.h>


char *get_animal(int year) {
  static char *animals[] = {
    "鼠", "牛", "虎", "兔", "龙", "蛇",
    "马", "羊", "猴", "鸡", "狗", "猪"
  };

  int index = (year - 1900) % 12;
  char *animal = animals[index];
  return animal;
}


char *get_sign(int month, int day) {
  static char *signs[] = {
    "水瓶座",
    "双鱼座",
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
    if (sindex == -1) {
      sindex = 11;
    }
  }
  char *sign = signs[sindex];
  return sign;
}


int main(void) {
  printf("你的出生日期是多少？");
  int year;
  int month;
  int day;
  scanf("%d %d %d", &year, &month, &day);
  printf("%d年%d月%d日 ", year, month, day);

  // 1900 鼠

  char *animal = get_animal(year);
  printf("属%s ", animal);

  char *sign = get_sign(month, day);
  printf("%s ", sign);


  char *skys[] = {
    "甲", "乙", "丙", "丁", "戊", "己", "庚", "辛", "壬", "癸"
  };
  char *grounds[] = {
    "子", "丑", "寅", "卯", "辰", "巳", "午", "未", "申", "酉", "戌", "亥"
  };

  // 4
  int count = year - 4;
  int k = 0;
  int j = 0;
  for (int i = 0; i < count; i++) {
    k = (k + 1) % 10;
    j = (j + 1) % 12;
  }
  char *sky = skys[k];
  char *ground = grounds[j];
  printf("%s%s年", sky, ground);
}
