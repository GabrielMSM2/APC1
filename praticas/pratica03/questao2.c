#include <stdio.h>
#include <math.h>

int main (){
  float valor_bruto, valor_desconto;

  printf("Digite o valor bruto: ");
  int deu_certo = scanf("%f", &valor_bruto);

  if (deu_certo) {
  if(valor_bruto <= 100.0) {
    valor_desconto = valor_bruto * 0.01f;
  } else if (valor_bruto <= 500.0f) {
    valor_desconto = valor_bruto * 0.05f;
  } else {
    valor_desconto = valor_bruto * 0.1f;
  }

  printf("Valor do desconto: %.2f\n", valor_desconto);
  } else {
    printf("Valor invalido. Tente novamente\n");
  }

  return 0;
}