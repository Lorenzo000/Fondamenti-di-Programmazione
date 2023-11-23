#include <stdio.h>

int N;
int cont;
int prec;
int curr;
bool dec = false, cr = false, none = false;

int main(){
	do{
		printf("Inserisci la grandezza della sequenza di numeri > ");
		scanf("%d", &N);		
	} while(N < 2);
	
	printf("Inserisci il numero > ");
	scanf("%d", &curr);	
	
	prec = curr;	
	
	while(cont < (N-1)){
		printf("Inserisci il numero > ");
		scanf("%d", &curr);		
		if(curr > prec){
			prec = curr;
			cr = true;
		} else if(curr < prec){
			prec = curr;
			dec = true;			
		} 
		cont++;
	}


	if(cr && !dec){
		printf("La sequenza e' crescente");
	} else if(!cr && dec){
		printf("La sequenza e' decrescente");
	} else {
		printf("Non e' possibile definire l'ordinamento della sequenza");
	}
	
	return 0;
}
