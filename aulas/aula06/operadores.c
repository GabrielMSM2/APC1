 #include <stdio.h>
#include <math.h>

int main() {
  int numero1;
  int numero2;
  const double PI = 3.14;

  printf("valor numero1: ");
  int deu_certo = scanf("%i", &numero1);
  
  printf("valor numero2: ");
  deu_certo = scanf("%i", &numero2);

  int resultado = numero1 +numero2;
  printf("soma dos numeros: %i\n", resultado);

  resultado = numero1 - numero2;
  printf("subtracao dos numeros: %i\n", resultado);

  resultado = numero1 * numero2;
  printf("multiplicacao dos numeros: %i\n", resultado);

  resultado = numero1 / numero2;
  printf("divisão dos numeros: %i\n", resultado);

  float resultado2 = numero1 / (numero2 * 1.0); //conversao implicita
  printf("divisão dos numeros: %.1f\n", resultado2);

  resultado = numero1 % numero2;
  printf("resto da divisão dos numeros: %i\n", resultado);
    
  //numero1 = numero1 + 1;
  //numero1++;
  //++numero1;

  //numero1 = numero1 - 1;
  //numero1--;
  //--numero1;

  printf("incremento do numero1: %i\n", numero1++);
  printf("incremento do numero1: %i\n", ++numero1);

  printf("decremento do numero1: %i\n", numero1--);
  printf("decremento do numero1: %i\n", --numero1);

  double raiz = sqrt(numero1);
  printf("raiz quadrada do numero1: %.2f\n", raiz);
    
  double potencia = pow(numero1, 3); //numero1^3
  printf("3a potencia do numero1: %.2f\n", potencia);
  
  double logaritmo_base2 = log2(numero1); //log(numero1) base 10
  printf("logaritmo base 2 do numero1: %.2f\n", logaritmo_base2);
  
  double seno = sin(numero1 * (M_PI / 180));  //radianos
  printf("seno do numero1: %.2f\n", seno);
  
 return 0;
}