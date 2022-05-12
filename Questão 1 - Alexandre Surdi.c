#include <stdio.h>

char categoria;
float quantidade, soma, total, media;

int main(void) {

  do{
  printf("Informe a categoria:\n");
  setbuf(stdin,NULL);
  scanf("%c", &categoria);  
    do {
  printf("Informe a quantidade:\n");
  scanf("%f", &quantidade);
      }while (quantidade<=0);
    if (categoria == 'A' || categoria == 'B' || categoria == 'C'){  

  soma = soma + quantidade;
  total++;
  media = soma/total; 
  }
  }
  while (categoria == 'A' || categoria == 'B' || categoria == 'C');
  printf ("A média dos produtos é %.2f:", media);
  
}