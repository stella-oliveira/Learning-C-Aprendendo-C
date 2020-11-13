#include <stdio.h>
#include "BibliotecaViana.c"	// Ao importar biblioteca que não seja nativa do C,
								// tem que colocar aspas duplas.
int main (){					// Arquivo e biblioteca tem que ser salvos na mesma pasta
	
	char nome[30];
	int idade, cpf, i;
	
	corFundo(63);	// Muda cor do fundo
	
	gotoxy(1,1); 	// Posiciona curso em determina parte da tela. Passa valor de linha (X) e coluna (Y)
	
	printf("%c", 218);		// 218 = canto superior esquerdo
	for(i=0; i<60; i++){
		printf("%c", 196);	// 196 = traço horizontal
	}
	
	printf("%c", 191);		// 191 = canto superior direito
	printf("\n%c", 179);	// 179 = traço vertical
	gotoxy(2,62); printf("%c", 179);		
	
	printf("\n");
	printf("%c", 192); 		// 192 = canto esquerdo inferior
	for(i=0; i<60; i++){
		printf("%c", 196);
	}
	printf("%c", 217); 		// 217 = canto direito inferior
	
	delay(3000);	// Pausa tela por 3s
	
	cor(1);
	gotoxy(2,2);
	printf("Nome: ");	
	
	gotoxy(2,8);	// Reposiciona cursor para ler nome
	scanf("%s", &nome);
	printf("\n\n");
	
	/*
	gotoxy(1,25);	// Posiciona na mesma linha. Cuidado pra não sobreescrever informações
	printf("Idade: ");
	gotoxy(1,40);
	printf("CPF: ");
	
	gotoxy(1,32);
	scanf("%i", &idade);
	gotoxy(1,45);
	scanf("%i", &cpf);
	*/
}
