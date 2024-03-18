#include <stdio.h>

int main() {
  float base;
  float altura;

  base = 2.0f; //2.0f isso float, 2.0 isso double
  altura = 3.0f;
  printf("valor da base:");
  int deu_certo = scanf(" %f", &base);

 printf("valor da altura:");
  deu_certo = scanf(" %f", &altura);

  float area = base * altura / 2;

  printf("area do triangulo eh %f\n", area);
  

  return 0;
}