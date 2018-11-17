#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// windows下怎么睡
// 根据需要查google，或文档
#include <unistd.h>


char *get_animal();


int main(void) {
  srand(time(NULL));

  for (int i = 0; i < 100; i++) {
    char *animal = get_animal();
    printf("\b\b\b\b%s", animal);
    fflush(stdout);
    usleep(10000);
  }
}


char *get_animal() {
  static char *animals[] = {
    "鼠", "牛", "虎", "兔", "龙", "蛇",
    "马", "羊", "猴", "鸡", "狗", "猪"
  };
//  int rnd = rand();
//  printf("%d", rnd);
  int index = rand() % 12;
  char *animal = animals[index];
  return animal;
}

