#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int comp(char **a, char **b) {
  return strlen(*a) - strlen(*b);
}


int main(void) {
  char *words[] = {
    "Merchant", "and", "passenger", "ships",
    "are", "generally", "required"
  };

  int size = sizeof(words) / sizeof(words[0]);
  qsort(words, size, sizeof(words[0]), comp);

  for (int i = 0; i < size; i++) {
    printf("%s ", words[i]);
  }
}
