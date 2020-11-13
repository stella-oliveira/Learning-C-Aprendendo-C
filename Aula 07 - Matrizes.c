#include <stdio.h>

int main() {
	
	int ra[5], i, j;
	float notas[5][4];		// notas[linhas][colunas] = 5 linhas (5 alunos) e 4 colunas (4 notas)
	
	for(i=0; i<5; i++){
		printf("Informe o RA do aluno %i: ", i+1);
		scanf("%i", &ra[i]);
	}
	
	for(i=0; i<5; i++){
		printf("\nInforme a nota do aluno %i: \n", ra[i]);
		
		for(j=0; j<4; j++){					// i percorre linhas e j percorre colunas		
			printf("Informe a nota %i: ", j+1);
			scanf("%f", &notas[i][j]); 			// Tem que ter duas variáveis de controle, porque senão ele vai ler notas[0][0], 
		}							// depois notas[1][1], etc -> para cada linha, coluna vai de 0 a 3	
	}
	
	printf("\n")
	
	for(i=0; i<5; i++){		// Imprimir matriz
		for(j=0; j<4; j++){						
			printf("%.2f ", notas[i][j]);
		}								
		printf("\n");
	}
}
