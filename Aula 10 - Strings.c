#include <stdio.h>

int main(){
	
	char nomes[3][2][20]; 	// Matriz de string
	int i=0, j=0;
	
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			printf("Informe um nome: ");
			scanf("%s", &nomes[i][j]);
		}
	}
	printf("\n\n");

	// Imprimir matriz com posições
	for(j=0; j<2; j++){
		printf("\t%i\t", j);
	}
		
	for(i=0; i<3; i++){
		printf("\n%i", i);
		for(j=0; j<2; j++){
			printf("\t%s\t", nomes[i][j]);
		}
		printf("\n");
	}
}
