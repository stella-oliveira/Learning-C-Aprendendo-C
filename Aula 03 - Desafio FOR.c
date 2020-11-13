/* 6 cartas para serem entregues por 2 carteiros
Números pares ou ímpares: ler os números de n1 a n6
	Se for par -> carteiro 1
	Senão -> carteiro 2
Quantas cartas cada carteiro vai entregar?
Ex: 4 cartas para o carteiro 1 e 2 cartas para o carteiro 2 */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int carteiro1=0, carteiro2=0, n1, x;
	
	for(x=1; x<7; x++){
		printf("\nInforme o número da residência: ");
		scanf("%i", &n1);
		
		if (n1%2==0){
			carteiro1++;
		} else {
			carteiro2++;
		}
	}
	
	printf("\nA divisão de cartas é:\n\t%i cartas para o Carteiro 1 (residências pares)\n\t%i cartas para o Carteiro 2 (residências ímpares).", carteiro1, carteiro2);
	
}
