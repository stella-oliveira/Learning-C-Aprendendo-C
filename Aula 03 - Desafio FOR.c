// 6 cartas para serem entregues
// 2 carteiros

// par ou �mpar

// ler os n�meros de n1 a n6

// se for par -> carteiro1
// senao -> carteiro 2

// quantas cartas cada carteiro vai entregar?

// resposta: 4 cartas para o carteiro 1 e 2 cartas para o carteiro 2

#include<stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int carteiro1=0, carteiro2=0, n1, x;
	
	for(x=1; x<7; x++){
		printf("\nInforme o n�mero da resid�ncia: ");
		scanf("%i", &n1);
		
		if (n1%2==0){
			carteiro1++;
		} else {
			carteiro2++;
		}
	}
	
	printf("\nA divis�o de cartas �:\n\t%i cartas para o Carteiro 1 (resid�ncias pares)\n\t%i cartas para o Carteiro 2 (resid�ncias �mpares).", carteiro1, carteiro2);
	
}
