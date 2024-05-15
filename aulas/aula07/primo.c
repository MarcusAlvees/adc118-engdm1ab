#include <stdio.h> 

int main() {
  int numero;

  printf("Digite um número inteiro: ");
  int deu_certo = scanf("%d", &numero);

  if(deu_certo) {
    int divisiveis = 0;
    for(int i=1; i<=numero; i++){
      if(numero % i == 0){
        divisiveis++;
      }
    }
    if(divisiveis == 2)
    {
      printf("É um número primo\n");
    }
    else {
      printf("Não é número primo\n");
    }
  }
  else{
    printf("Número Inválido\n");
  }
  
  return 0;
}