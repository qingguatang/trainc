#include <stdio.h>


int main(void) {
  // pi/2 = 1 + 1/3 + 1*2/3*5 + 1*2*3/3*5*7 + 1*2*3*4/3*5*7*9

  double sum = 1;
  double step = 1;
  int i = 1;
  while (step > 1e-16) {
    step = step * i / (2 * i + 1);
    sum += step;
    i++;
  }

  double pi = sum * 2;

  printf("%.15f", pi);
}
