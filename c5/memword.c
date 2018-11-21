#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


void clear_line() {
  printf("\r%*s\r", 100, "");
  fflush(stdout);
}


void show(char *word, int second) {
  printf("%s ", word);
  fflush(stdout);
  for (int i = 0; i < second; i++) {
    printf(".");
    fflush(stdout);
    usleep(1000 * 1000);  // 1s
  }
  clear_line();
}


void trim_br(char *str) {
  char *p = str + strlen(str) - 1;
  if (*p == '\n') {
    *p = '\0';
  }
}


bool is_correct(char *sentence, char *input) {
  char word[100];
  strcpy(word, input);
  strcat(word, " ");
  return strstr(sentence, word) != NULL;
}


int main(int argc, char *argv[]) {
  srand(time(NULL));

  int n = 3000;
  char words[n][1000];

  FILE *fp = fopen(argv[1], "r");

  int count = 0;
  while (fgets(words[count], 1000, fp)) {
    trim_br(words[count]);
    count++;
  }

  fclose(fp);

  // 单词数量为count个
  printf("共载入单词%d个\n", count);

  int t = 1;
  do {
    int index = rand() % count;
    char *word= words[index];
    show(word, 3);

    char input[100];
    scanf("%s", input);

    if (is_correct(word, input)) {
      printf("正确！");
      fflush(stdout);
      usleep(1000 * 1000);
    } else {
      printf("错误~ %s", word);
      fflush(stdout);
      usleep(2000 * 1000);
    }
    clear_line();
  } while (t);
}

