
class Circulo
{
private:
	// FIXME: usar a classe Ponto no lugar de x,y 
	int x, y, raio;

public:
	Circulo(int px, int py, int praio);

	void setX(int px);
	void setY(int py);
	void setRaio(int praio);

	int getX();
	int getY();
	int getRaio();

	double calcular(Circulo c);

};

