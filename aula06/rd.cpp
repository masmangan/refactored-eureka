

#include <iostream>
#include "rd.h"

using namespace std;

int dobrar(int a)
{
	return 2 * a;
}

void par(int n)
{
	cout << "O número (" << n << ") é ";

	if (n % 2 == 0)
	{
		cout << "par.";
	}
	else
	{
		cout << "ímpar.";
	}
	cout << endl;
}
