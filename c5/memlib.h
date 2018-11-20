#ifndef TRAINC_MEMLIB_H
#define TRAINC_MEMLIB_H

#include <stdbool.h>

void print(int *list, int n);
bool contains(int *list, int n, int value);
void init_nums(int *list, int n);
void init_spaces(int *list, int n);
void numbers_to_string(char *buf, int *list, int n);

#endif //TRAINC_MEMLIB_H
