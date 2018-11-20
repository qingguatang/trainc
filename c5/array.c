#include <stdio.h>


int sum_of_list(int *list, int len) {
  int sum = 0;
//  printf("function： %d\n", sizeof(list));
//  int len = sizeof(list) / sizeof(list[0]);
//  printf("%d", len);
  for (int i = 0; i < len; i++) {
    sum += list[i];
  }

  return sum;
}


int main(void) {
  int list[] = {1, 2, 3, 4, 5};

//  printf("list：%p\n", list);
//  printf("%p\n", &list[0]);

  int *item = list;

  printf("item：%d\n", *item);
  printf("item：%d\n", *(item + 1));
  printf("item：%d\n", *(item + 2));

  printf("item：%d\n", item[0]);
  printf("item：%d\n", item[1]);
  printf("item：%d\n", item[2]);


  int len = sizeof(list) / sizeof(list[0]);
  int sum = sum_of_list(list, len);
  printf("sum： %d\n", sum);
}
