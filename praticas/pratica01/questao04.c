/*
Faça um programa em C que calcule os impostos incluidos no preço de um produto (peço fina = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7.6% e PIS/PASEP igau a 1.65%. 
*/

#include <stdio.h>

#define ICMS 0.17
#define COFINS 0.076
#define PIS_PASEP 0.0165

int main() {
  float valor_inicial = 100.0f;
  float valor_final = 0.f;

  float valor_imposto_icms = ICMS * valor_inicial;
  float valor_imposto_cofins = COFINS * valor_inicial;
  float valor_imposto_pis_pasep = PIS_PASEP * valor_inicial;

  valor_final = (1 + ICMS + COFINS + PIS_PASEP) * valor_inicial;

  printf("preço inicial = %f\n", valor_inicial);
  printf("preço ICMS = %f\n", valor_imposto_icms);
  printf("preço COFINS = %f\n", valor_imposto_cofins);
  printf("preço PIS/PASEP = %f\n", valor_imposto_pis_pasep);
  printf("preço FINAL = %f\n", valor_final);
  
  return 0;
}