#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>


void print(int *list, int n);
bool contains(int *list, int n, int value);
void init_nums(int *list, int n);
void init_spaces(int *list, int n);
void numbers_to_string(char *buf, int *list, int n);


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


bool contains(int *list, int n, value) {
  for (int i = 0; i < n; i++) {
    if (list[i] == value) {
      return true;
    }
  }
  return false;
}


void init_nums(int *list, int n) {
  int index = 0;
  while (index < n) {
    int value = rand() % 10;
    if (!contains(list, index, value)) {
      list[index] = value;
      index++;
    }
  }
//  print(list, n);
}


void print(int *list, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", list[i]);
  }
}


void init_spaces(int *list, int n) {
  for (int i = 0; i < n; i++) {
    *list = ' ';
    list++;
  }
  *list = '\n';
}


void numbers_to_string(char *buf, int *list, int n) {
  for (int i = 0; i < n; i++) {
    buf[i] = (char)('0' + list[i]);
  }
  buf[n] = '\0';
}
