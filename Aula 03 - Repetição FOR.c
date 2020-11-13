// Algoritmo lê X números e mostra a média deles ao final

#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, n, soma;
	float media;
	
	soma = 0; // Para não ter lixo de memória, começar com 0
	
	// for -> quando sabe quantidade de repetições
	// while
	// do...while
	
	for(i=1;i<=10;i++){ 						//	Estrutura de repetição
		printf("Informe um número: ");			//	i vai inicializar laço (valor inicial do laço)
		scanf("%i", &n);						//	Qual a condição (até onde vai)
												//	Qual é o controle/passo (vai de um em um) 
		soma += n; // soma = soma + n	
}
	
	media = (float)soma/10; // (float) é um cast, força o resultado a ser mostrado como float
							// Entende que é inteiro dividido por inteiro e não mostra casas decimais
							// Outra solução: dividir por 10.0 (entende como float) ou declarar SOMA como float
	
	printf("\nA média é: %.2f", media);
}
