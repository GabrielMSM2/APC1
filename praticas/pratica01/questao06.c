#include <stdio.h>
#include <math.h>

int main() {

  double a, b, c, delta, r1, r2;

  printf("digite o valor de a: ");
  int deu_certo = scanf("%lf", &a);

  printf("digite o valor de b: ");
  deu_certo = scanf("%lf", &b);

  printf("digite o valor de c: ");
  deu_certo = scanf("%lf", &c);

  delta = pow(b,2) - (4 * a * c);
  r1 = (-b + sqrt(delta)) / (2 * a);
  r2 = (-b - sqrt(delta)) / (2 * a);

  printf("raiz 1: %.2lf\n", r1);
  printf("raiz 2: %.2lf\n", r2);

  return 0;
}