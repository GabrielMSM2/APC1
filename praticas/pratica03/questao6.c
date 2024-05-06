#include <stdio.h>

int main() {

int numero;
  
  printf("Insira um numero de 1 a 100:");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo && numero > 0 && numero < 101) {
  //  for(int i = 1; i <= 100; i++) {
  //    if (i % numero == 0) {
  //      printf("%i\n", i);
  //   }
  //  }
    for (int i = numero; i < 101; i = i + numero) {
      printf("%i\n", i);
    }
    printf("\n");
  } else {
    printf("Numero invalido. Tente novamente\n");
  }
  return 0;
}