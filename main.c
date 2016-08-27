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
			//insere o indice da coluna na matrix
			matriz[j][k] = k;
			//exibe o valor da posição atual da matrix
			printf("%02d ", matriz[j][k]);
		}
		//quebra a linha a partir da quarta coluna
		printf("\n");
	}
	
	
	// imprime uma mensagem de identificação
	printf("\nOs elementos da Diagonal Principal sao: ");
	// efetua a varredura da matriz
	for(j=0; j<4; j++)
	{
		//imprime o resutado esperado
		printf("%02d ", matriz[j][j]);
	}
	
	
	// imprime uma mensagem de identificação 
	printf("\n\nOs demais elementos sao: \n");
	//insere o indice da coluna na matrix
	for(j=0; j<4; j++)
	{
		//exibe o valor da posição atual da matrix
		for(k=0; k<4; k++)
		{
			//se os indices forem iguais(diagonal principal)
			if (j == k) printf("-- ");
			// senão exibe o valor da posição atual da matrix
			else printf("%02d ", matriz[j][k]);
		}
		//quebra a linha
		printf("\n");
	}
	//retorna 0
	return 0;
}
