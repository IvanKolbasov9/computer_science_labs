#include "math.h"
#include "stdio.h"

int main() {
  double x, y, t1, t2, t3, r, z1, z2;
  const double eps = 1e-7;
  const double eps2 = 1e-18;
  printf("\n Enter tab valuse and step, pls");
  scanf("%lf %lf %lf", &t1, &t2, &t3);
  // printf("\n %5.2f %5.2f %5.2f",t1,t2,t3);
  printf("\n|   x   |   y   |");
  for (double i = t1; i <= t2; i = i + t3) {
    x = i;
    z1 = sin(x);
    z2 = cos(x);
    printf("\n %9.7lf   %9.7lf", z1, z2);
    if (fabs(x - 1) < eps || (x - 0.0) < eps || (fabs(sin(x) - 0.0)) < eps2 ||
        (fabs(cos(x) - 0.0)) < eps2) {
      printf("\n| %5.2lf |  ---  |", x);
    } else {
      y = (pow(x, 2) - 2 * x + 1) / tan(x) + log(3.) / log(x);
      printf("\n| %5.2lf | %5.2lf |", x, y);
    }
  }
  //||(sin(x)-0.0)<eps||(cos(x)-0.0)<eps
  return 0;
}