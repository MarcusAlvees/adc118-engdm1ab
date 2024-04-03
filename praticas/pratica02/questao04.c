//4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).

#include <stdio.h>
int main () {
  printf("Digite um comprimento(em metros): ");
  int comprimento;
  int deu_certo = scanf("%i", &comprimento);
  
  printf("Digite um largura(em metros): ");
  int largura;
  deu_certo = scanf("%i", &largura);

  int area = comprimento * largura;
  printf("A área de seu terreno é %.2f hectares\n", 1.0f * area / 10000);
  return 0;
}