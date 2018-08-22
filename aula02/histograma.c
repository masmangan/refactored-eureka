// marco.mangan@pucrs.br
// Apresenta um histograma para uma variável inteira.

#include <stdio.h>		// STandarD Input Output

int main()			// rotina principal
{

	int n;			// variável do tipo inteiro

	printf("Informe um valor inteiro: ");
	scanf("%d", &n);	// input

	// i = 1, 2, 3, 4, 5,..., n
	int i;
	for ( i = 0; i < n ; i++)
	{
		printf("*");	// output
	}
	printf("\n");		// output

	return 0;		// avisa o Linux que o programa
				// terminou corretamente
}


