#include <stdio.h>

int main() {
  int numero ;
  printf("Digite um número: ");
  int deu_certo = scanf("%d", &numero);
  getchar();

  while(!(numero >= 1 && numero <= 10)) {
    printf("Digite o número novamente: ");
    deu_certo = scanf("%d", &numero);
    getchar();
  }
  
  return 0;
}