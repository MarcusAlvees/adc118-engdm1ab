#include <stdio.h>
#include <string.h>

int main(){
  char nome[31];

  printf("Entre com seu nome: ");
  int deu_certo = scanf("%[^\n]s", nome);
  printf("Olá %s!\n", nome);

  char primeiro_nome[21];
  char ultimo_nome[21];

  strcpy(primeiro_nome, "Jose"); // primeiro_nome = "Jose"
  strcpy(ultimo_nome, "Silva");
  
  strcpy(nome, primeiro_nome);
  strcat(nome, ultimo_nome); // nome = primeiro_nome + ultimo_nome

  int tamanho = strlen(nome);
  printf("Seu nome é %s e tem %i letras\n", nome, tamanho);

  printf("As strings são iguais? %i\n", strcmp(primeiro_nome, ultimo_nome));
  
  return 0;
}