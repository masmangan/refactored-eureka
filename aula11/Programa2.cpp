#include <iostream>
#include "Circulo.h"
 
using namespace std;
 
int main()
{
	Circulo c1(3, 0, 5);
	Circulo c2(3, 0, 10);

	cout << "Círculos!" << endl;

	cout << "(" << c1.getX() << ", " << c1.getY() << ": " << c1.getRaio() << ")" << endl;
	cout << "(" << c2.getX() << ", " << c2.getY() << ": " << c2.getRaio() << ")" << endl;

	cout << c1.calcular(c2) << endl;

	return 0;
}
