#include "Ponto.h"
#include <cmath>

Ponto::Ponto(int px, int py)
{
	setX(px);
	setY(py);
}

void Ponto::setX(int px) 
{ 
	x = px; 
}

void Ponto::setY(int py) 
{ 
	y = py; 
}

int Ponto::getX() 
{ 
	return x; 
}

int Ponto::getY() 
{ 
	return y; 
}

double Ponto::calcular(Ponto p)
{
	return sqrt( pow( x - p.x, 2.0 ) + pow( y - p.y, 2.0 ) );
}


