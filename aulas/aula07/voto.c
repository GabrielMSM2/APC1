#include <stdio.h>

int main (){

  int idade;
  printf("Digite a idade: ");
  int deu_certo = scanf("%d", &idade);

  if (deu_certo) {
    if (idade < 16) {
      printf("Nao eleitor\n");
    } else if (idade >= 16 && idade <= 17) {
      printf("Pode votar\n"); 
      } else { 
      printf("Voto nao obrigatorio\n");
    } if (idade >= 18 && idade <= 70) {
      printf("Voto obrigatorio\n");
    } if (idade > 70) {
      printf("Voto nao obrigatorio\n");
    } 
  } else {
      printf("Idade invalido. Tente novamente\n");
    }
      
    
  

  return 0;
}