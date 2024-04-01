#include <stdio.h>


int main () {
  
int metro, hectare;

  
  printf("Insira um valor em metro quadrado: ");
  int deu_certo = scanf("%i", &metro);

  hectare = metro / 10000;

  printf("Valor em hectare: %i\n", hectare);
   
    
  return 0;
}