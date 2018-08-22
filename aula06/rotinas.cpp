#include <iostream>
#include "rd.h"

using namespace std;

int main()
{
	int n;

	cout << "Exemplo de rotinas (modular)" << endl;

	cout << "Informe um valor inteiro: " << endl;
	cin >> n;

	par(n);

	cout << "O dobro de " << n << " é ";
	cout << dobrar(n) << "." << endl;

	return 0;
}







