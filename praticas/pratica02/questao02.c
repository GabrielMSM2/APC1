#include  <stdio.h>

int main () {
  float n1, n2;

  printf("valor n1: ");
  int deu_certo = scanf("%f", &n1);

  printf("valor n2: ");
  deu_certo = scanf("%f", &n2);

  printf("resultado: %f\n", n1 / n2);

  
  return 0;
}