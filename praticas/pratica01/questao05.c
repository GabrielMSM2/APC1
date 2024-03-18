#include <stdio.h>

int main() {
  float gb;

  printf("valor em gb: ");
  int deu_certo = scanf("%f", &gb);

  printf("valor em bytes: %f\n", gb * 1024 * 1024 * 1024);

  return 0;
}