#include <stdio.h>

int main() {
  int numero;
  printf("Digite um número: ");
  int deu_certo = scanf("%i", &numero);
  if(deu_certo)
  {
    for(int i=0; i<=100; i++)
    {
      if(i % numero == 0) {
        printf("%i, ", i);
      }    
    }
    printf("\n");
  }
  else{
    printf("Número inválido\n");
  }
  return 0;
}