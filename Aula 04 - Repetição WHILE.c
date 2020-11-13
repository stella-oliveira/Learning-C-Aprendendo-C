// Algoritmo diz se número é par ou ímpar

#include <stdio.h>

int main(){

    int numero=1;

	while(numero != 0){
		printf("Informe o numero: ");
		scanf("%i", &numero);
	
		if(numero % 2 == 0){			// %2 indica resto da divisão (se for 0, é par, do contrário é ímpar. /2 indica resultado da divisão (pode dar decimal)
			printf("NUMERO PAR\n\n");
		} else {
			printf("NUMERO IMPAR\n\n");
		}
	}
}
