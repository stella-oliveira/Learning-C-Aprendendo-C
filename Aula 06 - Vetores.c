// float nota; 					Armazena somente UMA nota

float nota[4] = {0,0,0,0};		//	Armazena 4 notas

nota[0] = 65.10;	//	�ndice do vetor (inicia em 0)
nota[1] = 45.13;
nota[2] = 77.80;
nota[3] = 98.10;	//	A primeira posi��o � 0, por isso vai at� o 3 (total 4)
					//	Cada posi��o � como se fosse uma vari�vel

for(i=0; i<4; i++){
	scanf("%f", &nota[i]);
}	
