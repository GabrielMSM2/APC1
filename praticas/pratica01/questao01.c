#include <stdio.h>

int main() {
  //declaração das variaveis
  float A1, A2;
  printf("digite o valor de A1: ");
  int deu_certo = scanf("%f", &A1);

  printf("digite o valor de A2: ");
  deu_certo = scanf("%f", &A2);

  printf("media: %f\n", (A1 * 0.4 + A2 * 0.6) / 2);

  

  return 0;
}