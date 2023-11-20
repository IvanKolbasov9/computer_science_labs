#include "math.h"
#include "stdio.h"
#include "stdlib.h"

void tab(double start, double end, double step);

int main() {
  double start, end, step, a, b, c, sA, sG, k1, k2;

  printf("\n Enter start, end and step of tabuletion:");
  // scanf("\n %lf  %lf %lf",&start, &end, &step);
  // tab(start, end, step);

  printf("\n Enter a, b and c valuse:");
  scanf("\n %lf  %lf %lf", &a, &b, &c);
  sA = (a + b + c) / 3;
  k1 = a * b * c;
  k2 = 1. / 3;
  if (k1 < 0) {
    k1 = -k1;
    sG = -pow(k1, k2);
    printf("\n sA) %7.2lf \n sG) %7.2lf ", sA, sG);
  } else {
    sG = pow(k1, k2);
    printf("\n sA) %7.2lf \n sG) %7.2lf ", sA, sG);
  }
  printf("\n k1) %7.2lf  k2) %7.2lf ", k1, k2);

  return 0;
}
void tab(double start, double end, double step) {
  double Y, max;

  printf("\n |   X   |   Y   |");
  max = (sin(start)) / start;
  for (start; start <= end; start += step) {
    if (start == 0) {
      printf("\n |  %7.2lf  |   ---   |", start);
    } else {
      // printf("\n sin: %7.4lf", start);
      Y = (sin(start)) / start;
      if (Y > max) {
        max = Y;
      }
      printf("\n |  %7.2lf  |  %7.2lf  |", start, Y);
    }
  }
  printf("/n Max value is %7.2lf", max);
}