// marco.mangan@pucrs.br
// Calcula o dobro de um número inteiro informado pelo usuário.

#include <stdio.h>		// STandarD Input Output

int main()			// rotina principal
{

	int n;			// variável do tipo inteiro

	printf("Informe um valor inteiro: ");
	scanf("%d", &n);	// input

	printf("O dobro de %d é %d.\n", n, 2 * n);	// output

	return 0;		// avisa o Linux que o programa
				// terminou corretamente
}


