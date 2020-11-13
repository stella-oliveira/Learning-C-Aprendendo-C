// float nota; 					Armazena somente UMA nota

#include <stdio.h>

float nota[4] = {0,0,0,0};		//	Armazena 4 notas

nota[0] = 65.10;			//	Índice do vetor (inicia em 0)
nota[1] = 45.13;
nota[2] = 77.80;
nota[3] = 98.10;			//	A primeira posição é 0, por isso vai até o 3 (total 4)
					//	Cada posição é como se fosse uma variável

int main(){
	for(i=0; i<4; i++){
		scanf("%f", &nota[i]);
	}	
}
