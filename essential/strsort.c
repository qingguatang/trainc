#include <stdio.h>
#include <string.h>


void swap(char **strs, int a, int b) {
  char *t = strs[a];
  strs[a] = strs[b];
  strs[b] = t;
}



void swap2(char **a, char **b) {
  char *t = *a;
  *a = *b;
  *b = t;
}


void sort(char **strs, int n) {
  for (int i = 0; i < n; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (strcmp(strs[i],strs[j]) > 0) {
        min = j;
      }
    }
//    swap(strs, i, min);
    swap2(&strs[i], &strs[min]);
  }
}


int main(void) {
  char *sentence[] = {"Together", "in", "all", "these", "memories"};
  int len = sizeof(sentence) / sizeof(*sentence);
  sort(sentence, len);

  for (int i = 0; i < len; i++) {
    printf("%s ", sentence[i]);
  }
}

