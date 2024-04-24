#include <stdio.h>

int main() 
{
  int numero;
  printf("Digite um número: ");
  int deu_certo = scanf("%d", &numero);

  if(deu_certo) {
    if((numero % 2) == 0) {
      printf("%d é par\n", numero);
    }
    else{
      printf("%d é ímpar\n", numero);
    }
  }
  else{
    printf("Isso n é um número ;_;\n");
  }
  return 0;
}