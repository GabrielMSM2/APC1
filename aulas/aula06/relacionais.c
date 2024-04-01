#include <stdio.h>

int main() {
  int numero1;
  int numero2;

  printf("primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int sao_iguais = numero1 == numero2;
  printf("Os numeros sao iguais? %i\n", sao_iguais);

  int sao_diferentes = numero1 != numero2;
  printf("Os numeros sao diferentes? %i\n", sao_diferentes);

  int eh_maior = numero1 > numero2; // numero1 >= numero2
  printf("O primeiro numero eh maior que o segundo? %i\n",eh_maior);
  
  int eh_menor = numero1 < numero2; // numero1 <= numero2
  printf("O primeiro numero eh menor que o segundo? %i\n",eh_menor);

    
  
  return 0;
}