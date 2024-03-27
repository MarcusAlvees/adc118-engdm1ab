#include <stdio.h>
#include <math.h>

#define PI 3.14159
int main () {
  float angulo;
  float distancia;

  printf("Digite o ângulo do avião: ");
  int deu_certo = scanf("%f", &angulo);
  printf("Digite a distância do avião: ");
  deu_certo = scanf("%f", &distancia);

  float altura = sin(angulo * (PI / 180)) * distancia;

  printf("A altura do avião é %f\n", altura);
  
  return 0;
}