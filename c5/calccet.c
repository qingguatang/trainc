#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


typedef char Word[100];

typedef struct {
  Word word;
  int count;
} WordItem;


void read_word(Word buf, char *sentence) {
  fflush(stdout);
  int i = 0;
  while (isalpha(sentence[i])) {
    buf[i] = sentence[i];
    i++;
  }
  buf[i] = '\0';
}


int read_words(WordItem *words, char *path) {
  FILE *fp = fopen(path, "r");
  char buf[1000];
  int count = 0;
  while (fgets(buf, sizeof(buf), fp)) {
    read_word(words[count].word, buf);
    count++;
  }
  fclose(fp);
  return count;
}


int find_word(Word *words, int count, char *word) {
  for (int i = 0; i < count; i++) {
    if (strcmp(words[i], word) == 0) {
      return i;
    }
  }
  return -1;
}


void stat_words(WordItem *items, int count, char *path) {
  FILE *fp = fopen(path, "r");
  char buf[1000];
  while (fgets(buf, sizeof(buf), fp)) {
    char *token = strtok(buf, " ");
    while (token) {
      for (int i = 0; i < count; i++) {
        if (strcmp(items[i].word, token) == 0) {
          items[i].count++;
        }
      }
      token = strtok(NULL, " ");
    }
  }
  fclose(fp);
}


int word_comp(WordItem *a, WordItem *b) {
  return b->count - a->count;
}


int main(int argc, char **argv) {
  WordItem items[3000];

  int count = read_words(items, argv[1]);
  stat_words(items, count, argv[2]);
  qsort(items, count, sizeof(WordItem), word_comp);

  int encount = 0;
  for (int i = 0; i < count; i++) {
    if (items[i].count) {
      printf("%s (%d)\n", items[i].word, items[i].count);
      encount++;
    }
  }
  printf("共计 %d 个单词", encount);
}

