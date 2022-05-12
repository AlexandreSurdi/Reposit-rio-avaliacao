#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nummagic, num;

int main(void) {

  srand(time(NULL));

  nummagic = rand() % 10;

  while (num != nummagic){
    printf("digite o número mágico:");
    scanf("%d", &num);
  

  if (num < nummagic){
    printf ("Errado amigo, muito baixo\n");
  }
  else if (num > nummagic){
    printf("Cuidado amigão, alto demais\n");
  }
    }
  printf ("Good Job!!! %d é o número mágico", num);
  
  return 0;
}