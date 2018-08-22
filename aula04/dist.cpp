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
	int x1, y1, x2, y2;
	int d;
	cout << "Distância entre dois pontos" << endl;
	cout << "Informe o primeiro ponto (x1, y1): " << endl;
	cin >> x1 >> y1;
	cout << "Informe o segundo ponto (x2, y2): " << endl;
	cin >> x2 >> y2;
	cout << "(" << x1 << ", " << y1 << ")" << endl;
	cout << "(" << x2 << ", " << y2 << ")" << endl;
	d = sqrt( pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0) );
	cout << d << endl;
	return 0;
}

