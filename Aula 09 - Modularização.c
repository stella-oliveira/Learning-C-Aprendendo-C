/*	Vantagens da modulariza��o:
		Melhora a leitura/c�digo mais limpo/enxuto
		Ocupa menos mem�ria
		Facilita manuten��o
		Poss�vel reutilizar c�digo posteriormente
	Poss�vel colocar fun��es em outro arquivo e s� fazer include delas nesse arquivo */

#include <stdio.h>

int lado, area;		// VARI�VEL DE ESCOPO GLOBAL

/*	M�todo pode ser um procedimento ou uma fun��o 
		Procedimento n�o retorna nada para quem o chamou (n�o aguarda retorno de resultado, por ex)
			Para isso, utiliza VOID
		Fun��o retorna valores
	
	Cada m�todo � independente, cada um tem seu espa�o na mem�ria
	Dois tipo de vari�veis: global e local
		No in�cio do c�digo: VARI�VEL DE ESCOPO GLOBAL (acessa de dentro de qualquer m�todo)
		Locais: s�o criadas quando chama m�todo e destru�das quando ele finaliza
			As globais ficam armazenadas no c�digo enquanto ele est� executando
			Ao declarar local, s� pode utilizar dentro daquele m�todo
	
	Se tem vari�vel global e local com mesmo nome, utiliza sempre a LOCAL primeiro, se n�o houver local, chama vari�vel global
*/	

void lerDados(){			// N�o retornam dados quando m�todo � chamado
	printf("\nInforme o lado quadrado: ");
	scanf("%i", &lado);		// N�o retornar n�o quer dizer que n�o vai retornar na tela
}							// N�o retorna nada quando est� CHAMANDO

int calcularArea(){			// Se retorno � do tipo int, fun��o tamb�m � desse tipo
	area = lado * lado;
	return area;			// Retornar = atribuir valor � vari�vel
}

int main(){		// Executa na ordem que m�todos forem chamados
	int area;
	lerDados(); 	// Ao chamar, vai na fun��o, executa e volta na linha que estava e prossegue
	area = calcularArea(); 
	printf("A area = %i", area);
}
