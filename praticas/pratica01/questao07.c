#include <stdio.h>
#include <math.h>

int main () {

  double altura, distancia, angulo;
  const double PI = 3.14;

  printf("digite o valor da distancia: ");
  int deu_certo = scanf("%lf", &distancia);

  printf("digite o valor do angulo: ");
  deu_certo = scanf("%lf", &angulo);

  altura = sin(angulo * (PI / 180)) * distancia;

  printf("altura: %lf\n", altura);

  return 0;
}