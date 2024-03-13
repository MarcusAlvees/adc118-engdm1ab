#include <stdio.h>

int main() {
  int cocas = 5;
  printf("\x1b[32m---------------------------\n");
  printf("---------NOTA LEGAL--------\n");
  printf("---------------------------\n\x1b[0m");
  printf("ITEM             QTD  VALOR  \n");
  printf("%-16s %03i \x1b[34m%6.2f\n\x1b[0m", "Banana nanica", 2, 20.00);
  printf("%-16s %03i \x1b[34m%6.2f\n\x1b[0m", "Uva globo", 1, 15.00);
  printf("%-16s %03i \x1b[34m%6.2f\n\x1b[0m", "Laranja lima", 1, 18.00);
  //printf("COCA COLA          1   5.00\n");
  //printf("GUARANA            1   4.00\n");
  //printf("BANANA NANICA      2  25.00\n");
  
  printf("---------------------------\n");
  printf("\x1b[47mTOTAl              4  34.00\x1b[0m \n ");
}