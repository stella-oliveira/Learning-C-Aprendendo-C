#include <stdio.h>

int main(){

    int numero=1;

	while(numero != 0){
		printf("Informe o numero: ");
		scanf("%i", &numero);
	
		if(numero % 2 == 0){			// %2 indica resto da divis�o (se for 0, � par, do contr�rio � �mpar. /2 indica resultado da divis�o (pode dar decimal)
			printf("NUMERO PAR\n\n");
		} else {
			printf("NUMERO IMPAR\n\n");
		}

	}
}
