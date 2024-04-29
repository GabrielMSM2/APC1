#include <stdio.h>

int main() {
  int avaliacao;

  printf("Digite a avaliacao do atendimento entre 1 e 5: ");
  int deu_certo = scanf("%i", &avaliacao);

  switch (avaliacao) {
    case 1:printf("Ruim\n"); break;
    case 2:printf("Insuficiente\n"); break;
    case 3:printf("Suficiente\n"); break;
    case 4:printf("Bom\n"); break;
    case 5:printf("Otimo\n"); break;
    default: printf("Avaliacao invalida. Tente novamente\n");
  }
  
  return 0;
}