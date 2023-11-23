#include <stdio.h>
#include <math.h>

int Nbit;
int bit;
int Dec;
int cont;

int main(){
	do{
		printf("Inserisci il numero di bit del numero binario > ");
		scanf("%d", &Nbit);		
	} while(Nbit < 1);
	
	while(cont < Nbit){
		do{
			printf("Inserisci il bit in posizione %d > ", cont);
			scanf("%d", &bit);					
		} while(bit != 0 && bit != 1);
		Dec += pow(2,cont) * bit;
		cont++;
	}
	
	printf("\n%d", Dec);
	
	return 0;
}
