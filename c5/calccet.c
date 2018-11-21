#include <stdio.h>
#include <ctype.h>


typedef char Word[100];


void read_word(Word buf, char *sentence) {
  fflush(stdout);
  int i = 0;
  while (isalpha(sentence[i])) {
    buf[i] = sentence[i];
    i++;
  }
  buf[i] = '\0';
}


int read_words(Word *words, char *path) {
  FILE *fp = fopen(path, "r");
  char buf[1000];
  int count = 0;
  while (fgets(buf, sizeof buf, fp)) {
    read_word(words[count], buf);
    count++;
  }
  fclose(fp);
  return count;
}


int main(int argc, char **argv) {
  Word words[3000];
  int count = read_words(words, argv[1]);

  for (int i = 0; i < count; i++) {
    printf("%s\n", words[i]);
  }

//  FILE *fp = fopen(argv[1], "r");
//  printf("%p", fp);
//
//  char buf[1000];
//  while (fgets(buf, sizeof buf, fp)) {
//    printf("%s", buf);
//  }
//
//  fclose(fp);
}

