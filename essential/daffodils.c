#include <stdio.h>

int main(void) {
  // 求出所有3位的水仙花数
  for (int i = 100; i < 999; i++) {
    // 将三位数拆出来
    int a = i / 100;       // 百位
    int b = i % 100 / 10;  // 十位
    int c = i % 10;        // 个位

    // 立方和
    int sum = a * a * a + b * b * b + c * c * c;
    if (i == sum) {
      printf("%d ", i);
    }
  }
}
