#include <stdio.h> 

#define IR 0.25f
#define INSS 0.11f

int main () {
  float valor_da_hora_de_trabalho = 150.f;
  float total_de_horas_trabalhadas = 100.f;

  float valor_salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas;
  float valor_imposto_renda = valor_salario_bruto * IR;
  float valor_imposto_previdencia = valor_salario_bruto * INSS;
  float valor_salario_liquido = valor_salario_bruto - valor_imposto_renda - valor_imposto_previdencia;

  printf("\x1b[34m----------------------------\n");
  printf("--------CONTRACHEQUE--------\n");
  printf("----------------------------\x1b[0m\n");
  printf("Salario Bruto...: \x1b[32m%14.2f\x1b[0m\n", valor_salario_bruto);
  printf("Salario Renda...: \x1b[31m%14.2f\x1b[0m\n", valor_imposto_renda);
  printf("Salario Previ...: \x1b[31m%14.2f\x1b[0m\n", valor_imposto_previdencia);
  printf("Salario Liquido...: \x1b[32m%12.2f\x1b[0m\n", valor_salario_liquido);
  
  return 0;
}