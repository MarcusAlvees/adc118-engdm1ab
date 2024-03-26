#include <stdio.h> 

//Faça um programa em C que leia três números reais e imprima a média aritmética desses números.

int main() {
  float num1, num2, num3;

  printf("Digite o primeiro número real: ");
  int deu_certo = scanf("%f", &num1);
  printf("Digite o segundo número real: ");
  deu_certo = scanf("%f", &num2);
  printf("Digite o terceiro número real: ");
  deu_certo = scanf("%f", &num3);

  float resultado = (num1 + num2 + num3) / 3;
  printf("A média aritmética desses valores é %.2f\n", resultado);
  return 0;
}