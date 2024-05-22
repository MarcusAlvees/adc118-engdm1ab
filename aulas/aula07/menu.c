#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;

  while(opcao != 4) {
    printf("MEU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Resultados\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção => ");
    int deu_certo = scanf("%i", &opcao);
    if(!deu_certo){ opcao = 0; }
    while(getchar() != '\n'); //limpar buffer do teclado
    switch(opcao) {
    case 1: {
      deu_certo = system("clear");
      char nome[31];
      printf("Nome do jogador: ");
      deu_certo = scanf("%[^\n]s", nome);
      while(getchar() != '\n');
      printf("Ola %s\n", nome);
      printf("Pressione ENTER p/ iniciar\n");
      getchar();
      break; 
    }
    case 2: { 
      deu_certo = system("clear");
      printf("Resultado\n");
      printf("1° lugar - Marcao - 1000\n");
      printf("2° lugar - Marcao - 700\n");
      printf("3° lugar - Marcao - 600\n");
      printf("4° lugar - Marcao - 500\n");
      printf("5° lugar - Marcao - 100\n");
      printf("Pressione ENTER p/ voltar");
      getchar();
      break; 
    }
    case 3: break;
    case 4: break;
    default:
      deu_certo = system("clear");
      opcao = 0;
      printf("Opção inválida! Pressione ENTER p/ continuar\n");
      getchar();
    }
  }
  return 0;
}