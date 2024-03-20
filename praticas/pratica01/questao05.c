#include <stdio.h>

int main () {
  double gigabytes;
  long long bytes;

  
  int deu_certo = scanf("%lf", &gigabytes);
  bytes = gigabytes * 1024 * 1024 * 1024;
  printf("%ld\n", bytes);
  
  return 0;
}