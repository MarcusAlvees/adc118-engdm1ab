#include <stdio.h>
int main() {
  int numero;
  printf("Digite um número: ");
  int deu_certo = scanf("%d", &numero);

  if(deu_certo)
  {
    int resultado = numero;
    printf("%d! = ", numero);
    for(int i = numero-1; i>=1; i--) {
      resultado = resultado * (numero - i);
      printf("%d x ", i);
    }
    printf("= %d", resultado);
  }
  else{
    printf("Número inválido\n");
  }

  
  return 0;
}