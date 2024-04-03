//5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

#include <stdio.h>
#include <math.h>
int main() {
  int peso;
  float altura;

  printf("Digite um peso: ");
  int deu_certo = scanf("%i", &peso);
  
  printf("Digite uma altura: ");
  deu_certo = scanf("%f", &altura);

  float imc = 1.0f * peso / (altura * altura);

  printf("O imc dessa pessoa é %f\n", imc);
  
  return 0;
}