#include <stdio.h>

int main (){

int numero;

  printf("Digite um numero inteiro: ");
  int deu_certo = scanf("%i", &numero);

  printf("Caractere correspondente na tabela ASCII: %c\n", numero);

  return 0 ;
}