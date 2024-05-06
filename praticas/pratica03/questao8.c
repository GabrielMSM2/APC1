#include <stdio.h>

int main() {

  int numero;
  int fatorial = 1;

  printf("Insira um numero >= 0: ");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo && numero >= 0) {
    for(int i = numero; i > 1; i--) {
      fatorial = fatorial * i;
    }
    printf("O fatorial de %i eh %i\n", numero, fatorial);
    
  } else {
    printf("Numero invalido. Tente novamente\n");
  }
  
  return 0;
}