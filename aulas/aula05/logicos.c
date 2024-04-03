#include <stdio.h>
int main() {
  int numero1;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  int maior_que_0_menor_que_10 = 0 < numero1 && numero1 < 10;
  printf("É maior que 0 e menor que 10? %i\n", maior_que_0_menor_que_10);
  
  int menor_que_0_maior_que_10 = 0 > numero1 || numero1 > 10;
  printf("É menor que 0 ou maior que 10? %i\n", menor_que_0_maior_que_10);

  int nao_maior_que_zero = !(numero1 > 0);
  printf("O número não é maior que 0? %i\n", nao_maior_que_zero);

  return 0;
}