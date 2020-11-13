/*	Vantagens da modularização:
		Melhora a leitura/código mais limpo/enxuto
		Ocupa menos memória
		Facilita manutenção
		Possível reutilizar código posteriormente
	Possível colocar funções em outro arquivo e só fazer include delas nesse arquivo */

#include <stdio.h>

int lado, area;		// VARIÁVEL DE ESCOPO GLOBAL

/*	Método pode ser um procedimento ou uma função 
		Procedimento não retorna nada para quem o chamou (não aguarda retorno de resultado, por ex)
			Para isso, utiliza VOID
		Função retorna valores
	
	Cada método é independente, cada um tem seu espaço na memória
	Dois tipo de variáveis: global e local
		No início do código: VARIÁVEL DE ESCOPO GLOBAL (acessa de dentro de qualquer método)
		Locais: são criadas quando chama método e destruídas quando ele finaliza
			As globais ficam armazenadas no código enquanto ele está executando
			Ao declarar local, só pode utilizar dentro daquele método
	
	Se tem variável global e local com mesmo nome, utiliza sempre a LOCAL primeiro, se não houver local, chama variável global
*/	

void lerDados(){			// Não retornam dados quando método é chamado
	printf("\nInforme o lado quadrado: ");
	scanf("%i", &lado);		// Não retornar não quer dizer que não vai retornar na tela
}							// Não retorna nada quando está CHAMANDO

int calcularArea(){			// Se retorno é do tipo int, função também é desse tipo
	area = lado * lado;
	return area;			// Retornar = atribuir valor à variável
}

int main(){		// Executa na ordem que métodos forem chamados
	int area;
	lerDados(); 	// Ao chamar, vai na função, executa e volta na linha que estava e prossegue
	area = calcularArea(); 
	printf("A area = %i", area);
}
