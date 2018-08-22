#include <iostream>

using namespace std;

int dobrar(int a)
{
	return 2 * a;
}


int main()
{
	int n;

	cout << "Exemplo de rotinas" << endl;

	cout << "Informe um valor inteiro: " << endl;
	cin >> n;

	cout << "O número " << n << " é ";

	if (n % 2 == 0)
	{
		cout << "par.";
	}
	else
	{
		cout << "ímpar.";
	}
	cout << endl;

	cout << "O dobro de " << n << " é ";
	cout << dobrar(n) << "." << endl;

	return 0;
}






