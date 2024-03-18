#include <stdio.h>

int main() {
float peso, altura;
  
  printf("digite o valor do peso: ");
  int deu_certo = scanf("%f", &peso);

  printf("digite o valor da altura: ");
  deu_certo = scanf( "%f", &altura);

  printf("imc: %f\n", peso / (altura * altura));

  
  return 0;
}