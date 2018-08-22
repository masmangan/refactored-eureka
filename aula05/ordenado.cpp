// marco.mangan@pucrs.br
// Verifica se um vetor de inteiros está
// ordenado (de forma crescente).
//
// t=0, vs=[] -> O vetor está ordenado!
// t=1, vs=[10] -> O vetor está ordenado!
// t=2, vs=[10, 20] -> O vetor está ordenado!
// t=2, vs=[20, 10] -> O vetor NÃO está ordenado!
// t=2, vs=[10, 10] -> O vetor está ordenado!
// t=6, vs=[10, 20, 30, 30, 40, 90] -> O vetor está ordenado!
//
#include <iostream>

using namespace std;

int preencher(int vs[]);
int verificar(int vs[], int t);

int preencher(int vs[])
{
	// ler valores até que o usuário digite -1
	// cada valor vai para o vetor na posição i,
	// i inicia em 0 e incrementa em cada leitura
	// TODO: cin >> n;

	// TODO: i = 0;
	// TODO: vs[i] = n;

	int t = 2; // um número
	vs[0] = 10;
	vs[1] = 20;
	return t;
}

int verificar(int vs[], int t)
{
	// verificar se dois valores consecutivos 
	// estão desordenados. Caso sim, interrompe o programa
	// com a mensagem o NÃO está ordenado!
	int ordem = 1;	
	int i;
	for ( i = 0; i < (t - 1); i++ )
	{
		if (vs[i] > vs[i + 1])
		{
			// está desordenado!
			ordem = 0;	
			break;
		}
	}
	return ordem;
}

int main()
{
	int vs[10];	// vetor com área máxima disponível
	int n;		// um número sendo informado pelo usuário
	int t;		// quantidade de números informados
	int i;		// indice sobre o vetor

	cout << "Verifica ordenação" << endl;

	t = preencher(vs);

	int ordem = verificar(vs, t); 
	if (ordem == 1)
	{
		cout << "O vetor está ordenado!" << endl;
	}
	else
	{
		cout << "O vetor NÃO está ordenado!" << endl;
	}

	return 0;
}




















