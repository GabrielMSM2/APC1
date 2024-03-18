#include <stdio.h>

int main() {
  float variavel1, variavel2, variavel3;

  printf( "digite o valor da variavel1: ");
    int deu_certo = scanf("%f", &variavel1);

  printf( "digite o valor da variavel2: ");
    deu_certo = scanf("%f", &variavel2);

  printf("digite o valor da variavel3: ");
  deu_certo = scanf("%f", &variavel3);

  printf("media aritimetica: %f\n", (variavel1 + variavel2 + variavel3) / 3);

  return 0;
}