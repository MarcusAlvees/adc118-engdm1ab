#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c;

  printf("Escreva o 'A' da sua equação: ");
  int deu_certo = scanf("%d", &a);
  printf("Escreva o 'B' da sua equação: ");
  deu_certo = scanf("%d", &b);
  printf("Escreva o 'C' da sua equação: ");
  deu_certo = scanf("%d", &c);

  float delta = pow(b, 2) - (4 * a * c);

  float raiz1 = 1.0f * (-b + sqrt(delta)) / (2 * a);
  float raiz2 = 1.0f * (-b - sqrt(delta)) / (2 * a);

  printf("As raízes dessa equação é %.2f e %.2f", raiz1, raiz2);

  
  
  return 0;
}