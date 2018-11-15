#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

#define NUM 4


int main(void) {
  char* str = "Hello World";
  int a[] = {1, 2, 3};
  char* sentences[] = {
    "We shared the summer we go down to Cancun",
    "No money makes that kind of hard to do",
    "Forget the beach I'd rather be here",
    "with you playing Croquet",
    "with you playing Croquet"
  };

  int size = sizeof(sentences) / sizeof(sentences[0]);
//  printf("size);
  for (int i = 0; i < size; i++) {
    printf("%s\n", sentences[i]);

    time_t start = time(NULL);
    char input[100];
    gets(input);
    time_t end = time(NULL);
    //long
    time_t duration = end - start;

    int count = 0;
    int correct = 0;
    char* token = strtok(input, " ");
    while (token) {
//      puts(token);
      count = count + 1;

      char* pos = strstr(sentences[i], token);
      if (pos) {
        correct++;
      } else {
        printf("你打错了%s\n", token);
      }

//      count = count++;
//      count = ++count;
      token = strtok(NULL, " ");
    }

    //string
    //token strtok
    double speed = 60.0 * count / duration;
    double precision = 100.0 * correct / count;
    printf("你打字的速度为: %.2f个字每分钟, 准确率为%.2f%%\n",
      duration, count, speed, precision);
  }
}
