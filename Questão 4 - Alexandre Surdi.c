#include <stdio.h>

float n1, n2, resto;


int main(void) {

  printf ("informe o primeiro valor:");
  scanf ("%f", &n1);

  printf ("informe o segundo valor:");
  scanf ("%f", &n2);

if (n1 == 0 || n2 == 0){
  printf ("Impossivel dividir por 0\n");
}
if (n1 >= n2){
  resto = n1 / n2;
  printf ("%f", resto);
}

if (n2 >= n1){
  resto = n2 / n1;
  printf ("%f", resto);
}

  
  }   