#include <stdio.h>
int main() {
  char nome[32];
  int quantidade;
  float valor;
  
  printf("Entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", &nome);
  printf("Entre com a qtda do produto: ");
  deu_certo = scanf("%i", &quantidade);
  printf("Entre com o valor do produto: ");
  deu_certo = scanf("%f", &valor);
  
  printf("\x1b[32m---------------------------\n");
  printf("---------NOTA LEGAL--------\n");
  printf("---------------------------\n\x1b[0m");
  printf("ITEM             QTD  VALOR  \n");
  printf("%-16s %03i %6.2f\n\x1b[0m", nome, quantidade, valor*quantidade);
  return 0; 
}