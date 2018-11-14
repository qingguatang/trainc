#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <string.h>


#define NUM 4

int main(void) {
  char *sentences[] = {
    "We shared the summer we go down to Cancun",
    "No money makes that kind of hard to do",
    "Forget the beach I'd rather be here",
    "with you playing Croquet",
    "with you playing Croquet"
  };

  int size = sizeof(sentences) / sizeof(sentences[0]);
  for (int i = 0; i < size; i++) {
    printf("%s\n", sentences[i]);

    time_t start = time(NULL);
    char input[100];
    gets(input);
    time_t end = time(NULL);

    time_t duration = end - start;

    char *token = strtok(input, " ");
    int words = 0;
    int correct = 0;
    while (token) {
//      puts(token);
      words++;
      if (strstr(sentences[i], token)) {
        correct++;
      } else {
        printf("打错了：%s\n", token);
      }

      token = strtok(NULL, " ");
    }

    double speed = 1.0 * words / duration * 60;
    double precision = 100.0 * correct / words;
    printf("总共用了%d秒, 共%d单词, 速度为每分钟%.2f个单词, 准确率为：%.2f%%\n",
      duration, words, speed, precision);
  }
}
