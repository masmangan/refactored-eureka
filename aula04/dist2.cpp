// marco.mangan@pucrs.br
// Calcular a distância entre dois pontos.
// Exemplo:
// (0, 3); (4, 0) => 5
//
#include <iostream>
#include <cmath>
using namespace std;
struct ponto {
	int x;
	int y;
};
int main()
{
	struct ponto p1, p2;
	int d;
	cout << "Distância entre dois pontos (struct)" << endl;
	cout << "Informe o primeiro ponto (x1, y1): " << endl;
	cin >> p1.x >> p1.y;
	cout << "Informe o segundo ponto (x2, y2): " << endl;
	cin >> p2.x >> p2.y;
	cout << "(" << p1.x << ", " << p1.y << ")" << endl;
	cout << "(" << p2.x << ", " << p2.y << ")" << endl;
	d = sqrt( pow(p2.x - p1.x, 2.0) + pow(p2.y - p1.y, 2.0) );
	cout << d << endl;
	return 0;
}

