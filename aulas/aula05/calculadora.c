#include <stdio.h>
#include <math.h>

#define PI 3.1416
int main() {
  int num1, num2;

  printf("Digite um numero: ");
  int deu_certo = scanf("%i", &num1);
  printf("Digite outro numero: ");
  deu_certo = scanf("%i", &num2);

  printf("A soma dos números é %i\n", num1 + num2);
  printf("A subtração dos números é %i\n", num1 - num2);
  printf("A multiplicação dos números é %i\n", num1 * num2);

  float divisao = 1.0f * num1 / num2; //conversão implicita
  printf("A divisão dos números é %.2f\n", divisao);
  
  printf("O resto dos números é %i\n", num1 % num2);

  printf("O incremento do primeiro número é %i\n", ++num1);
  printf("O decremento do primeiro número é %i\n", --num1);

  double raiz_quadrada = sqrt(num1);
  printf("A raiz do primeiro número é %f\n", raiz_quadrada);

  double potencia = pow(num1, 4); // num1^4
  printf("O número 1 elevado a 4 é %f\n", potencia);
  
  double logaritmo = log2(num1); // num1^4
  printf("O logaritmo do número 1 na base 2 é %f\n", logaritmo);
  
  double seno = sin(num1 * (PI / 180)); 
  printf("O seno do número 1 é %f\n", sin);
  double cosseno = cos(num1 * (PI / 180)); 
  printf("O cosseno do número 1 é %f\n", cos);


  return 0;
}