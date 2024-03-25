#include <stdio.h>
#include <math.h>

int main() {
  double gb;

  printf("valor em gb: ");
  int deu_certo = scanf("%lf", &gb);
  
  gb = pow(1024, 3) * gb;
  printf("valor em bytes: %lf\n", gb * pow(1024, 3));
  
  return 0;
}