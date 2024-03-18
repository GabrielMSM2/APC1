#include <stdio.h>

int main() {
  char nome[31] = "";
  int quantidade = 0;
  float valor = 0.0f;
  
printf("Nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("Quantidade do produto: ");
  deu_certo = scanf("%i", &quantidade);

  printf("Valor do produto: ");
  deu_certo = scanf("%f", &valor);

  printf ("----------------------------\n");
  printf ("    N O T A    L E G A L    \n");
  printf ("----------------------------\n");
  printf ("Item             QTD  VALOR \n");

  printf ("%-15s %3i %8.2f\n", nome, quantidade, valor);
  
  return 0;
}