#include "Circulo.h"

Circulo::Circulo(int px, int py, int praio)
{
	setX(px);
	setY(px);
	setRaio(praio);
}

void Circulo::setX(int px)
{
	x = px;
}

void Circulo::setY(int py)
{
	y = py;
}

void Circulo::setRaio(int praio)
{
	raio = praio;
}

int Circulo::getX()
{
	return x;
}

int Circulo::getY()
{
	return y;
}

int Circulo::getRaio()
{
	return raio;
}

double Circulo::calcular(Circulo c)
{
	// TODO: 
		
	return 0;
}

