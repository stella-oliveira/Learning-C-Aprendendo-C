#include <stdio.h>

int main() {

	int num, a=15, b=15, i;

	// FOR: indicado para quando se sabe quantas vezes o programa irá executar (não necessariamente o valor é fixo) -> SEQUENCIAL
	//		++ incremento		-- decremento
	
	for (i=15; i > 10; i--){
		printf("Entrou no for i=%i\n", i);
	}
	printf("\n\n");
	
	// WHILE: indicado quando não se sabe quantas vezes irá executar (recebe uma condição apenas)
	//		Não necessariamente precisa de um passo. Precisa informar dentro do código caso queira.
		
	while (a > 10) {
		printf("Entrou no while a=%i\n", a);
		a--;
	}
	printf("\n\n");
	
	// DO...WHILE: obrigatoriamente irá executar uma única vez (no mínimo), independente da condição.
	//		Não precisa inicializar com valor necessariamente, porque vai executar de todo jeito uma vez. 
	//		Os outros precisam inicializar para entrar na condição.
	
	do {
		printf("Entrou no do...while b=%i\n", b);
		b--;
	} while (b > 10);	// No caso de um Menu, seria mais indicado o DO...WHILE, pois executaria uma vez.
	
}
