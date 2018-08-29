#include <iostream>
#include "Ponto.h"

int main()
{
	Ponto p1(0, 3);
	Ponto p2(4, 0);

	std::cout << "P1" << std::endl;
	std::cout << p1.calcular(p2) << std::endl;

	return 0;
}


