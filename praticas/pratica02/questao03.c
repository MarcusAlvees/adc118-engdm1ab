// 3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/°C + 32).

#include <stdio.h>

int main() {
  printf("Digite uma temperatura em Celsius: ");
  int temp_C;
  int deu_certo = scanf("%d", &temp_C);

  float temp_F = (temp_C * 1.8f) + 32;

  printf("A temperatura em Farenheit é: %.1fF\n", temp_F);
  
  return 0;
}