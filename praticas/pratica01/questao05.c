#include <stdio.h>

int main () {
  double gigabytes;
  long double bytes;

  printf("Digite uma quantidade de gigabytes: ");
  int deu_certo = scanf("%lf", &gigabytes);
  bytes = gigabytes * 1024 * 1024 * 1024;
  printf("Em %.0f gigabytes existem %.0f bytes\n", gigabytes, bytes);
  
  return 0;
}