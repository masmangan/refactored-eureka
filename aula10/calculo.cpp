// marco.mangan@pucrs.br
// 2018-08-31
// Escreva um programa em C++ que processe um arquivo
// com dados de alunos de uma turma.
// A avaliação é a adotada nesta disciplina.
// Exemplo:
//
// Rodrigo Cambará
// 10.0 (T1)
// 8.5 (P1)
// 7.0 (T2)
// 9.0 (P2)
// 8 (Faltas)

#include <iostream>
#include <string>

using namespace std;

class aluno 
{
public:
	string nome;
	double p1, p2, t1, t2;
	int faltas;

	double g1;
	string situacao;

	void ler()
	{
		getline(cin, nome);
		cin >> t1;
		cin >> p1;
		cin >> t2;
		cin >> p2;
		cin >> faltas;
	}

	void calcular(int max_faltas)
	{
		g1 = (2*p1 + 2*p2 + (t1 + t2) / 2 ) / 5;

		if (faltas > max_faltas)
		{
			situacao = "REP";
		} 
		else if (g1 >= 7)
		{
			situacao = "APR";
		} 
		else if (g1 < 4)
		{
			situacao = "REP";
		} 
		else 
		{  
			situacao = "G2";
		}
	}

	void escrever() 
	{
		cout << nome << " "  <<  situacao << endl;
		cout << t1 << endl;
		cout << p1 << endl;
		cout << t2 << endl;
		cout << p2 << endl;
		cout << faltas << endl;
		cout << g1 << endl;
	}
};

int main()
{
	aluno a;
	int aulas = 68;
	int max_faltas = aulas * .25;

	cout << "Cálculo de G1!" << endl;

	a.ler();

	a.calcular(max_faltas);

	a.escrever();

	cout << aulas << endl;
	cout << max_faltas << endl;

	return 0;
}
