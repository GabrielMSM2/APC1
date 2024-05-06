#include <stdio.h>

int main() {
  int quantidade;

   printf("Insira a quantidade de numeros a serem lidos: ");
   int deu_certo = scanf("%i", &quantidade);

   if(deu_certo && quantidade > 0) {
     int soma = 0;
     for(int i = 1; i <= quantidade; i++) {
       int numero;
       printf("Insira o %i numero: ", i);
       deu_certo = scanf("%i", &numero);
       if(deu_certo) {
         soma = soma + numero;
       } else {
         printf("Numero invalido. Tente novamente\n");
         getchar(); // limpa o \n
         i--; // volta 1 repetição
       }
     }
     float media_aritmetica = soma * 1.0f / quantidade;
     printf("A media aritmetica eh: %f\n", media_aritmetica);
   } else {
     printf("Quantidade invalida. Tente novamente\n");
   }
     




  
  return 0;
}