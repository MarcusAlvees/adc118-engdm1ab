/*
Faça um programa em C que calcule a média final a partir da fórmula (0.4 x A1) + (0.6 x A2).
*/

#include <stdio.h>

int main() {
  float nota1 = 5.5f;
  float nota2 = 4.0f;

  float media_final = (0.4 * nota1) + (0.6 * nota2);
  printf("A média final é %f\n", media_final);
  
  return 0;
}