#include <stdio.h> 

#define PI 3.14f
int main() {
  float raioPizza;
  float perimetro_pizza;

  system("clear");
  printf("Digite o raio de uma pizza: ");
  int deu_certo = scanf("%f", &raioPizza);
  
  perimetro_pizza = (2 * PI * raioPizza);

  printf("O perimetro da pizza é: %0.2f\n", perimetro_pizza);
  
  return 0;
}