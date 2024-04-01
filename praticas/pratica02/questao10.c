#include <stdio.h>

int main (){

int numero, i;
  
  printf("Insira um numero inteiro: ");
  int deu_certo = scanf("%d", &numero);

  printf("Tabuada de multiplicacao do numero %d\n", numero);
  
    for(int i = 1; i <= 10; i++) 
  
    printf("%d x %d = %d\n", numero, i, numero * i);
    

  return 0;
}