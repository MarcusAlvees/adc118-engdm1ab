#include <stdio.h>

int main(){
  signed char caracter_com_sinal; // 1 byte -126 a 127
  unsigned char caracter_sem_sinal; // 1 byte 0 a 255

  signed int inteiro_com_sinal; // 4 bytes
  unsigned int inteiro_sem_sinal; // 4 bytes
  
  short int inteiro_curto; // 2 bytes -32mil a 32mil
  long int inteiro_longo; // 8 bytes -9hexa a 9hexa

  long double duplo_longo; // 16 bytes -1.2e+4932 a 1.2e+4932
  
  return 0;
}