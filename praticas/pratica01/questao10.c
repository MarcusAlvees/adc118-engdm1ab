//faça um progama em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).

#include <stdio.h>

int main () {
  int numero;
  int unidade;
  int dezena;
  int centena;
  int milhar;

  printf("Insira um numero inteiro: ");
  int deu_certo = scanf("%i", &numero);

  unidade = numero % 10;
  printf("Unidade: %i\n", unidade);
  dezena = (numero % 100) / 10;
  printf("Dezena: %i\n", dezena);
  centena = (numero % 1000) / 100;
  printf("Centena: %i\n", centena);
  milhar = (numero % 10000) / 1000;
  printf("Milhar: %i\n", milhar);

  return 0;
}