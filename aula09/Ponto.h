#include <cmath>


class Ponto
{
private:
	int x;
	int y;
public:
	Ponto();
	Ponto(int px, int py);
	int getX();
	int getY();
	void setX(int px);
	void setY(int py);
	double calcular(Ponto p);
};
