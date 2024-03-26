//Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles
#include <stdio.h>

int main() {
  int num1, num2;
  
  printf("Digite um valor inteiro: ");
  int deu_certo = scanf("%d", &num1);
  
  printf("Digite outro valor inteiro: ");
  deu_certo = scanf("%d", &num2);

  float quociente = num1 / num2;
  float resto = num1 % num2;

  printf("O quociente da divisão desses números é %.0f e o resto é %.2f\n", quociente, resto);
  return 0;
  
}