#include<stdio.h>  

int main(){
  int numero1;
  int numero2;

  printf("primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int maior_que_zero_menor_que_dez = 0<numero1 && numero1<10; //0 < numero1 < 10
  printf("primeiro numero eh maior que zero e menor que dez? %i\n",maior_que_zero_menor_que_dez);
  
  int menor_que_zero_maior_que_dez = 0>numero1 || numero1>10; 
  //numero1<0 || numero 1>10
  printf("primeiro numero menor que zero e maior que dez: %i\n",menor_que_zero_maior_que_dez);

  int nao_eh_maior_que_zero = !(numero1>0); //negacao
  printf("primeiro numero nao eh maior que zero: %i\n",nao_eh_maior_que_zero);
  
  return 0;
}