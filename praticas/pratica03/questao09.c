#include <stdio.h>

int main() {
  int numero = 1;
  int maior=0;
  int menor=0;

  while(numero != 0) {
    printf("Entre com um número: ");
    int deu_certo = scanf("%i", &numero);

    if(deu_certo){
      if(numero < menor) {menor = numero; }
      if(numero > maior) {maior = numero; }
    }
    else {
      getchar();
      printf("Numero invalido. Tente outro\n");
    }
  }

  printf("O menor número é %i e o maior é %i\n", menor, maior);
  return 0;
}