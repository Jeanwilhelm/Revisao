#include <stdio.h>

int main(void)
{
	unsigned int i;
	unsigned int n;
	unsigned int Resultado=1;
	
	printf("Digite um numero inteiro positivo a ser fatorado: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++)
	{
		printf(" ")
		Resultado = Resultado * (n-i);
		printf("\nResultado = %d", Resultado);	
	}
	
	printf("\nO valor da fatoração de %d! eh %d", n, Resultado);
}
