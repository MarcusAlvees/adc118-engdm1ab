#include <stdio.h>
#include <math.h> 

int main () {
  int segundos;

  printf("Digite um valor em segundos: ");
  int deu_certo = scanf("%d", &segundos);

  int minutos = segundos / 60;
  int horas = minutos / 60;

  int segundos_restantes = segundos % 60;
  int minutos_restantes = minutos % 60;

  printf("%d segundos corresponde a %d horas, %d minutos e %d segundos\n", segundos, horas, minutos_restantes, segundos_restantes);
  
  return 0;
}