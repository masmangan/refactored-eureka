#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
private:
	string courseName;
public:
	void setCourseName( string name )
	{
		courseName = name;
	}
	void displayMessage()
	{
	   	cout << "Bem-vindo ao Grade Book de \n";
		cout << courseName << "!" << endl;
	}
};

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook;

	cout << "Exemplo de classe" << endl;

	cout << "Informe o nome do curso:";
	getline(cin, nameOfCourse);
	myGradeBook.setCourseName( nameOfCourse );

	myGradeBook.displayMessage();

	return 0;
}




