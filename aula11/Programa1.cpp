#include <iostream>
#include "Ponto.h"
 
using namespace std;
 
int main()
{
	Ponto p1(3, 0);
	Ponto p2(0, 4);

	cout << "Pontos!" << endl;

	cout << "(" << p1.getX() << ", " << p1.getY() << ")" << endl;
	cout << "(" << p2.getX() << ", " << p2.getY() << ")" << endl;

	cout << p1.calcular(p2) << endl;

	return 0;
}
