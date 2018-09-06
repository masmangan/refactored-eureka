
class Ponto
{
private:
	int x, y;

public:
	Ponto(int px, int py);

	void setX(int px);
	void setY(int py);

	int getX();
	int getY();

	double calcular(Ponto p);

};

