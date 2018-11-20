#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

#include "memlib.h"


int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = 6;
  if (argc == 2) {
    n = atoi(argv[1]);
  }

  int list[n];
  init_nums(list, n);
  print(list, n);

  int spaces[n + 1];
  init_spaces(spaces, n);

  fflush(stdout);
  usleep(1000 * 1000);  // 1s
//  printf("\r%s", spaces);
  printf("\r%*s", n, "");
  fflush(stdout);

  int str[n + 1];
  numbers_to_string(str, list, n);
//  printf("%s", str);

  char input[100];
  scanf("%s", input);
  if (strcmp(input, str) == 0) {
    printf("正确！");
  } else {
    printf("错啦~");
  }
}

