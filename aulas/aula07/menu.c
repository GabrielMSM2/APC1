#include <stdio.h>

int main() {
  int opcao;

  printf("Menu Principal\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Recarregar saldo\n");
  printf("3 - Ligações feitas\n");
  printf("4 - Ligações perdidas\n");
  printf("0 - Sair\n");
  int deu_certo = scanf("%i", &opcao);

  switch (opcao) {
    case 1:printf("Seu saldo e de R$10.00\n"); break;
    case 2: {
      float valor;
      printf("Entre com valor da recarga\n");
      deu_certo = scanf("%f", &valor);
      break;
    }
    case 3: {
      printf("As 5 ultimas ligações feitas\n");
      printf("9999-9999\n");
      printf("8888-8888\n");
      break;
    }
    case 4: {
      printf("As ultimas 5 ligacoes perdidas\n");
      printf("9999-9999\n");
      printf("8888-8888\n");
      break;
    }
    case 0:("0 - Sair\n"); break;
    default: printf("Opcao invalida. Tente novamente\n");
  }    
  

  return 0;
}