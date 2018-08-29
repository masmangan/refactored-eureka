#include "Ponto.h"
#include <cmath>

Ponto::Ponto() {}
Ponto::Ponto(int px, int py)
{
	setX(px);
	setY(py);
}
int Ponto::getX() { return x; }
int Ponto::getY() { return y; }
void Ponto::setX(int px) { x = px; }
void Ponto::setY(int py) { y = py; }
double Ponto::calcular(Ponto p)
{
	return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
}

