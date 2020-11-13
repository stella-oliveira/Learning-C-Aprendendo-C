// Algoritmo l� X n�meros e mostra a m�dia deles ao final

#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, n, soma;
	float media;
	
	soma = 0; // Para n�o ter lixo de mem�ria, come�ar com 0
	
	// for -> quando sabe quantidade de repeti��es
	// while
	// do...while
	
	for(i=1;i<=10;i++){ 						//	Estrutura de repeti��o
		printf("Informe um n�mero: ");			//	i vai inicializar la�o (valor inicial do la�o)
		scanf("%i", &n);						//	Qual a condi��o (at� onde vai)
												//	Qual � o controle/passo (vai de um em um) 
		soma += n; // soma = soma + n	
}
	
	media = (float)soma/10; // (float) � um cast, for�a o resultado a ser mostrado como float
							// Entende que � inteiro dividido por inteiro e n�o mostra casas decimais
							// Outra solu��o: dividir por 10.0 (entende como float) ou declarar SOMA como float
	
	printf("\nA m�dia �: %.2f", media);
}
