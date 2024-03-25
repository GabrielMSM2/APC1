#include <stdio.h>

int main() {

  int anos, meses, dias, dias2, idade;

  printf("digite a idade em anos: ");
  int deu_certo = scanf("%i", &anos);

  printf("digite a idade em meses: ");
  deu_certo = scanf("%i", &meses);

  printf("digite a idade em dias: ");
  deu_certo = scanf("%i", &dias);
  idade = anos * 365 + meses * 30 + dias;

  printf("idade em dias: %i\n", idade);

  return 0;
}