#include <stdio.h>

int main () { 
  float temperatura_celsius;

  printf("digite a temperatura_celsius: ");
  int deu_certo = scanf("%f", &temperatura_celsius);

  printf("temperatura em graus fahrenheit: %f\n", (temperatura_celsius * 1.8) + 32);

  return 0;
}