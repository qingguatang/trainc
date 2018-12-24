#include <stdio.h>


double e_pow(int x) {
  double sum = 1;

  int i = 1;
  int fac = 1;
  double pow = 1;
  double step = pow / fac;
  while (step > 1e-10) {
    pow *= x;
    fac = fac * i;
    step = pow / fac;
    sum += step;
    i++;
  }
  return sum;
}


int main(void) {
  printf("%.10f\n", e_pow(1));
}
