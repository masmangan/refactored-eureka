#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
	void displayMessage( string courseName )
	{
	   	cout << "Bem-vindo ao Grade Book for \n";
		cout << courseName << "!" << endl;
	}
};

int main()
{
	cout << "Exemplo de classe" << endl;
	
	GradeBook myGradeBook;
	myGradeBook.displayMessage( "PE II" );

	return 0;
}




