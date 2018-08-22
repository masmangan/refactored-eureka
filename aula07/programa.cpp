#include <iostream>

using namespace std;

class GradeBook
{
public:
	void displayMessage()
	{
	   cout << "Bem-vindo ao Grade Book!" << endl;
	}
};

int main()
{
	cout << "Exemplo de classe" << endl;
	
	GradeBook myGradeBook;
	myGradeBook.displayMessage();

	return 0;
}




