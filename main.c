#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	// criação de variáveis
	int matriz[4][4], j=0, k=0;
	//busca por números aleatórios
	srand( (unsigned)time(NULL));
	//exibe uma mensagem na tela
	printf("MATRIZ ORIGINAL:\n\n");
	//laço que varre a linha
	for(j=0; j<4; j++)
	{
		//laço que varre a coluna
		for(k=0; k<4; k++)
		{
			//insere o valor randômico em uma posição da matriz
			matriz[j][k] = rand()%50;
			//exibe o valor da posição atual da matrix
			printf("%02d ", matriz[j][k]);
		}
		//quebra a linha a partir da quarta coluna
		printf("\n");
	}
	//retorna 0
	return 0;
}
