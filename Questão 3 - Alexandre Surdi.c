#include<stdlib.h>
#include<stdio.h>

char repetir;
int linf,lsup,nlinha,i,j,primo,pulalinha=0;

int main(void)
{
  
    do{
      
	pulalinha=0;
      
	printf("\nInfome o valor do limite inferior:");
	scanf("%i",&linf);
      
	while(linf<1){printf("\nO limite deve ser no minimo 1\nInforme o limite inferior:");
		scanf("%i",&linf);}
      
		printf("\nInforme o valor do limite superior:");
		scanf("%i",&lsup);
      
	while(linf>lsup){printf("\n O limite superior deve ser maior ou igual ao inferior!\nInforme o limite superior:");
		scanf("%i",&lsup);}
      
		printf("\nQuantos numeros deseja imprimir por linha?");
		scanf("%i",&nlinha);	
	
	for (i = linf; i <= lsup; i++) {
		if (i == 0 || i == 1) {
		
			primo = 0;
		} else {
			primo = 1; 
			for(j = 2; j < i; j++) { 
				if (i % j == 0) {
					primo = 0; 
				}}}
		if (primo == 1) {
			printf("%i ", i);
			pulalinha++;
			if(pulalinha>=nlinha){
				printf("\n");
				pulalinha=0;
			}}}

    printf("\nDeseja repetir o programa <S ou N>?");
    scanf(" %c",&repetir);	
    }while(repetir=='S'|| repetir =='s');
	
	return 0;
}