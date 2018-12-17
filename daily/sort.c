#include <stdio.h>


typedef struct Student {
  char name[100];
  int age;
} Student;


/**
 * 选择排序
 */
void sort(Student *list, int n) {
  for (int i = 0; i < n; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (list[j].age < list[min].age) {
        min = j;
      }
    }

    // swap
    Student t = list[i];
    list[i] = list[min];
    list[min] = t;
  }
}


int main(void) {
  Student list[] = {
    { "A", 20 },
    { "B", 10 },
    { "C", 12 },
    { "C", 50 }
  };

  int len = sizeof(list) / sizeof(*list);
  sort(list, len);

  for (int i = 0; i < len; i++) {
    printf("%s, %d\n", list[i].name, list[i].age);
  }
}
