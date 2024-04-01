#include <stdio.h>
#include <math.h>

int main(){

  
  float x1, y1, x2, y2, dist_pontos;
  

  printf("Digite o valor do x1 e x2: ");
  int deu_certo = scanf("%f %f", &x1, &x2);
  
  printf("Digite o valor do y1 e y2: ");
  deu_certo = scanf("%f %f", &y1, &y2);

  
  dist_pontos = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    
  printf("Valor da distancia entre os pontos: %f", dist_pontos);
  

  return 0;
}