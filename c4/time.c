#include <stdio.h>
#include <time.h>
#include <unistd.h>


void gettime(char *buf, int size) {
  time_t t = time(NULL);
  struct tm *now = gmtime(&t);
  strftime(buf, sizeof buf, "%T", now);
}


int main(void) {
  int k = 1;
  while (k) {
    char buf[70];
    gettime(buf, sizeof buf);
    printf("\b\b\b\b\b\b\b\b\b\b\b\b");
    printf("%s", buf);
    fflush(stdout);
    sleep(1);
  }
}

