#include <stdio.h>

int main() {

  struct item_nota_fiscal_t {
    char nome[21];
    int quantidade;
    float preco;
    float valor;
  };
  struct item_nota_fiscal_t item[5];
  float total = 0.0f;

  for (int i = 0; i < 5; i++) {
    printf("Entre com o nome do produto: ");
    int deu_certo = scanf("%[^\n]s", item[i].nome);
    while (getchar() != '\n');

    printf("Entre com a quantidade: ");
    deu_certo = scanf("%i", &item[i].quantidade);
    while (getchar() != '\n');

    printf("Entre com o preço do produto: ");
    deu_certo = scanf("%f", &item[i].preco);
    while (getchar() != '\n');

    item[i].valor = item[i].quantidade * item[i].preco;
    t  otal = total + item[i].valor;
  }

  printf("\n   N O T A  L E G A L   \n");
  printf("Item            Qtd  Preco  Valor\n");
  for(int i = 0; i < 5; i++) {
  printf("%-15s %3i %6.2f %6.2f\n", item[i].nome, item[i].quantidade, item[i].preco,
  item[i].valor);
  }
  printf("total......................%6.2f\n", total);
  
  return 0;
}