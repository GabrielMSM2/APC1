#include <stdio.h>

int main () {
int avaliacao;

  printf("Digite a avaliacao do motorista entre 1 e 5: ");
  int deu_certo = scanf("%i", &avaliacao);
  /*
  if (deu_certo) {
    if (avaliacao == 1) {
      printf("Motorista ganhou *\n");
    } else if (avaliacao == 2) {
      printf("Motorista ganhou **\n");
    } else if (avaliacao == 3) {
      printf("Motorista ganhou ***\n");
    } else if (avaliacao == 4) {
      printf("Motorista ganhou ****\n");
    } else if (avaliacao == 5) {
      printf("Motorista ganhou *****\n");
    } else {
      printf("Valor invalido. Tente novamente\n");
    }
  */
    switch (avaliacao) {
      case 1:printf("Motorista ganhou *\n"); break;
      case 2:printf("Motorista ganhou **\n"); break;
      case 3:printf("Motorista ganhou ***\n"); break;
      case 4:printf("Motorista ganhou ****\n"); break;
      case 5:printf("Motorista ganhou *****\n"); break;
      default: printf("Avaliacao invalida. Tente novamente\n");
    }
  
  return 0;
}