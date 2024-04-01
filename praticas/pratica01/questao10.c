#include <stdio.h>

int main() {
  
  int numero, milhar, centena, dezena, unidade, resto;

  printf("insira um numero: ");
  int deu_certo = scanf("%i", &numero);

  //unidade
  unidade = numero % 10;
  
  //dezena
  resto = (numero - unidade) / 10;
  dezena = resto % 10;
    
  //centena
  resto = numero / 100;
  centena = resto % 10;

  //milhar
  milhar = numero / 1000; 

  printf("milhar: %i\n", milhar);
  printf("centena: %i\n", centena);
  printf("dezena: %i\n", dezena);
  printf("unidade: %i\n", unidade);
  


  return 0;
}