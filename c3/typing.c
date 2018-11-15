#include <stdio.h>
#include <string.h>
#include <time.h>


int main(void) {
//  int list = {1, 2, 3};
//  char words = {'a', 'b', 'c'};
  char *sentences[] = {
    "We shared the summer we go down to Cancun",
    "No money makes that kind of hard to do",
    "Forget the beach I'd rather be here",
    "with you playing Croquet"
  };

//  char str[] = {'a', 'b', 'c', 'd', 'e', '\0'};
//  printf("%s\n", str);

//  printf("%d", sizeof(sentences));
  int size = sizeof(sentences) / sizeof(sentences[0]);

  for (int i = 0; i < size; i++) {
    printf("%s\n", sentences[i]);

    time_t start = time(NULL);
    char input[100];
    gets(input);
    time_t end = time(NULL);
    int used = end - start;

    int count = 0;
    int correct_count = 0;
    char *token = strtok(input, " ");
    while (token) {
//      puts(token);
      count++;
//      count = count + 1;

      char *pos = strstr(sentences[i], token);
      if (pos) {
        correct_count++;
      } else {
        printf("你打错了:%s\n", token);
      }

      token = strtok(NULL, " ");
    }

    float speed = (1.0f * count / used) * 60;
    double precision = (1.0 * correct_count * 100 / count);
    printf("共使用了%d秒, 共录入%d个单词, 平均每分钟打%.2f个字, 准确率为:%.2f%%\n",
      used, count, speed, precision);
  }
}