#include <stdio.h>

int main() {

  int segundos, horas, minutos, segundos2, resto;

  printf("digite o valor em segundos: ");
  int deu_certo = scanf("%i", &segundos);

  horas = segundos / 3600;
  resto = segundos % 3600;
  minutos = resto / 60;
  resto = resto % 60;
  
  printf("valor em horas: %i, em minutos: %i, em segundos: %i\n", horas, minutos, resto);

  return 0;
}