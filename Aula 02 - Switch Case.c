#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

// Entrada de dados: 11/06/1994
// Sa�da de dados: 11 de Junho de 1994

int dia, mes, ano;
char mesExtenso[20];

int main(){
	
	// printf("\nEst%c", 160); // esse %c vai ser substitu�do pelo caracter correspondente (Tabela ASCII)
	//		OU
	setlocale(LC_ALL, "Portuguese"); // Tem que importar biblioteca <locale.h>
		// V�lido para todos os printf abaixo
		// Problema: separador de casas decimais � diferente em Portugu�s VS Ingl�s -> isso tamb�m altera
	// printf("\nEst� come�ando mais uma aula");
	
	system("color fc"); // Alterar cor do prompt de comando -> para ver possibilidades cores, escrever "color help" no DOS
	
	printf("\nEscreva a sua data de nascimento (Ex.: dd/mm/aaa): ");
	scanf("%i/%d/%i", &dia, &mes, &ano); // %d (double) para conseguir ler 0 antes do m�s (faz convers�o de tipo de dado e ignora o 0 a esquerda)
		
	// 		if (mes == 01){
	// 			strcpy(mesExtenso, "Janeiro");
	// 		}else if (mes == 02){
	//			strcpy(mesExtenso, "Fevereiro");
	//		}
	
	// switch ... case -> Testar valores para mesma vari�vel (se fizer com if...else vai ficar estrutura muito grande) -> simplificar
	// N�o funciona exatamente igual. 
	// if...case testa um e, se condi��o � verdadeira, n�o executa o resto. 
	// switch...case executa tudo a principio (por isso coloca "break" para parar execu��o se for o caso)
	
	if (mes > 0 && mes <=12) {
	
	switch(mes) {
		case 1:
			strcpy(mesExtenso, "Janeiro");
			// tamb�m poderia colocar -> printf("%i de Janeiro de %1", dia, ano); -> a� n�o utiliza string
			break;
		case 2:
			strcpy(mesExtenso, "Fevereiro");
			break;
		case 3:
			strcpy(mesExtenso, "Marco");
			break;
		case 4:
			strcpy(mesExtenso, "Abril");
			break;
		case 5:
			strcpy(mesExtenso, "Maio");
			break;		
		case 6:
			strcpy(mesExtenso, "Junho");
			break;
		case 7:
       		strcpy(mesExtenso, "Julho");
        	break;
        case 8:
        	strcpy(mesExtenso, "Agosto");
        	break;
        case 9:
        	strcpy(mesExtenso, "Setembro");
        	break;
        case 10:
        	strcpy(mesExtenso, "Outubro");
	        break;
        case 11:
        	strcpy(mesExtenso, "Novembro");
        	break;
        case 12:
        	strcpy(mesExtenso, "Dezembro");
        	break;
		// default:	(Nenhuma condi��o acima foi atendida)
			// printf("N�o foi poss�vel identificar o m�s.\n");
			// break;
		printf("%i de %s de %i", dia, mesExtenso, ano); // %s -> recebendo valor de STRING
		}
	}
	else { printf("N�o � uma data v�lida.");
	}
	
		// system("cls"); 	// Apagar tela ou conte�do. Todos os comandos do DOS s�o v�lidos -> criar pasta, mover arquivo, etc.
							// Para navegar entre pastas, tem que colocar \\ para ignorar uma das barras (se tornam uma)
							// Ex: md C\\Stella -> criar pasta C, depois colocar esse comando para criar pasta Stella dentro da C
	
	}
