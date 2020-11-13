#include <stdio.h>

int main() {

	int num, a=15, b=15, i;

	// FOR: indicado para quando se sabe quantas vezes o programa ir� executar (n�o necessariamente o valor � fixo) -> SEQUENCIAL
	//		++ incremento		-- decremento
	
	for (i=15; i > 10; i--){
		printf("Entrou no for i=%i\n", i);
	}
	printf("\n\n");
	
	// WHILE: indicado quando n�o se sabe quantas vezes ir� executar (recebe uma condi��o apenas)
	//		N�o necessariamente precisa de um passo. Precisa informar dentro do c�digo caso queira.
		
	while (a > 10) {
		printf("Entrou no while a=%i\n", a);
		a--;
	}
	printf("\n\n");
	
	// DO...WHILE: obrigatoriamente ir� executar uma �nica vez (no m�nimo), independente da condi��o.
	//		N�o precisa inicializar com valor necessariamente, porque vai executar de todo jeito uma vez. 
	//		Os outros precisam inicializar para entrar na condi��o.
	
	do {
		printf("Entrou no do...while b=%i\n", b);
		b--;
	} while (b > 10);	// No caso de um Menu, seria mais indicado o DO...WHILE, pois executaria uma vez.
	
}
