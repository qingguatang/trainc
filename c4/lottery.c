#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char *getAnimal();


void sleep() {
  clock_t start = clock();
  while (1) {
    clock_t now = clock();
    if (1.0 * (now - start) / CLOCKS_PER_SEC > 0.01) {
      break;
    }
  }
}


int main(void) {
  srand(time(NULL));

  for (int i = 0; i < 100; i++) {
    char *animal = getAnimal();
    printf("\b\b\b");
    printf("%s", animal);
    fflush(stdout);
    sleep();
  }
}


char *getAnimal() {
  int index = rand();
//  printf("%d", index);

  index = index % 12;

  static char *animals[] = {
    "鼠", "牛", "虎", "兔", "龙", "蛇",
    "马", "羊", "猴", "鸡", "狗", "猪"
  };

  char *animal = animals[index];
  return animal;
}

