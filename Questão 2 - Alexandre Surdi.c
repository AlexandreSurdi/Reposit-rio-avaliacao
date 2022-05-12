#include <stdio.h>

int bem, dor;
float temperatura;

int main(void) {
  printf ("paciente se sente bem? Digite 1 para sim 2 para não:\n");
  scanf ("%d", &bem);

 if (bem == 1){
   printf ("paciente saudavel\n");
}
  else {
  printf ("paciente tem dor? Digite 3 para sim 4 para não\n");
    scanf ("%d", &dor);
    if (dor == 3){
      printf ("doente");
      }
    else {
      printf ("Qual sua temperatura?\n");
      scanf ("%f", &temperatura);
      if (temperatura <= 37){
        printf ("Saudavel");
      }
      else {
        printf ("Com febre");
      }
    }
    }
  }
  
