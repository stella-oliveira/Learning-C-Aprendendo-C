// Algoritmo que recebe 4 notas de um aluno, calcula a média de todas e, se a média for maior ou igual a 65, imprime Aluno Aprovado, senão imprime Aluno Reprovado.

#include<stdio.h>

int n1, n2, n3, n4;
float media;

int main (){
	// Leitura das variáveis:	 %i -> inteiro		f -> float		c -> char
	printf("Informe a nota 1: ");
	scanf("%i",&n1);
	printf("Informe a nota 2: ");
	scanf("%i",&n2);
	printf("Informe a nota 3: ");
	scanf("%i",&n3);
	printf("Informe a nota 4: ");
	scanf("%i",&n4);
	
	media = (n1+n2+n3+n4)/4;
	
	printf("\nMedia do aluno: %f\n", media); // \n quebra linha
	
	if(media>=65){
		printf("\nAluno foi APROVADO");
	}else if (media>40 && media<65){
		printf("\nAluno esta de RECUPERACAO");
	}else {
		printf("\nAluno foi REPROVADO");
	}
}
