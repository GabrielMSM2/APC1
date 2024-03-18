#include <stdio.h>

int main() {
  float raio;
  const float PI = 3.141592f;

  printf("digite o valor do raio: ");
  int deu_certo = scanf("%f", &raio);

  printf("perimetro de uma piza: %f\n",  2 * PI * raio);
  

  return 0;
}