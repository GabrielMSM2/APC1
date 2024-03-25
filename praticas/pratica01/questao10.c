#include <stdio.h>

int main() {

  int milhares, centenas, dezenas, unidades;

  printf("digite o valor em milhares: ");
  int deu_certo = scanf("%i", &milhares);

  milhares = milhares * 1000;
  centenas = milhares / 100;
  dezenas = milhares % 100;
  unidades = dezenas % 10;

 


  
  return 0;
}