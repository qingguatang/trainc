#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


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

