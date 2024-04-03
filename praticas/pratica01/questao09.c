#include <stdio.h>
int main() {
  printf("Digite uma idade em ano: ");
  int idade_anos;
  int deu_certo = scanf("%d", &idade_anos);
  
  printf("Em meses: ");
  int idade_meses;
  deu_certo = scanf("%d", &idade_meses);
  
  printf("Em dias: ");
  int idade_dias;
  deu_certo = scanf("%d", &idade_dias);

  int idade_anos_para_dias = (idade_anos * 365);
  int idade_meses_para_dias = (idade_meses * 30);

  printf("idade em dias: %d\n", idade_anos_para_dias + idade_meses_para_dias + idade_dias);
  
  return 0;
}