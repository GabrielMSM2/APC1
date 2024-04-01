#include <stdio.h>

 int main () {

   int valor_compra, ano_fabricacao, ano_depreciacao, depreciação;

   printf("Insira o valor de compra: ");
   int deu_certo = scanf("%i", &valor_compra);

   printf("Insira o ano de fabricacao: ");
   deu_certo = scanf("%i", &ano_fabricacao);

   printf("Insira o ano de depreciacao: ");
   deu_certo = scanf("%i", &ano_depreciacao);
   

   depreciação = (ano_depreciacao - ano_fabricacao) * 0.01 * valor_compra;

   printf("Valor depreciado do veiculo: %i\n", depreciação);
   
   return 0;
 }