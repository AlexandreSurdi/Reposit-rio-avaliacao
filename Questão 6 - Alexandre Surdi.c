#include <stdio.h>

int numposit, cont=1, contar;
char repetidor;

int main (void){

  do{

    cont = 0;

	printf("\n Digite um número positivo: ");
	scanf("%d", &numposit);
    
    while(numposit <= 0)
    {
        printf("Digite um número positivo: ");
        scanf("%d", &numposit);
    }

	while (cont <= numposit)
    {	
	    printf (" \n");

	    for (contar = 1; contar <= cont; contar++) 
        {
		    printf (" %d ", cont);
        }
        cont++;
    }  

        printf("\nDeseja digitar outro numero? <S ou N>");
        scanf(" %c", &repetidor);

    }while(repetidor == 'S' || repetidor == 's');

    return 0;
} 