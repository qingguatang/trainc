#include <stdio.h>


int main(int argc, char *argv[]) {
  printf("参数数量：%d\n", argc);
  for (int i = 0; i < argc; i++) {
    printf("%s\n", argv[i]);
  }
}
