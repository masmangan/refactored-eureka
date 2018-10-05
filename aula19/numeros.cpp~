/*
Escreva um programa que recebe uma lista
de números e a apresenta.
A seguir, os números são organizados
em duas listas: pares e ímpares.
As duas listas devem ser apresentadas
em ordem crescente.
marco.mangan@pucrs.br
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> numeros; 	
	vector<int> pares;		
	vector<int> impares;		

	cout << "STL C++ Vector" << endl;
	
	// FIXME: receber valores a partir do teclado
	// os valores fixos abaixo simplificam o teste do
	// restante do programa
	numeros.push_back(40);
	numeros.push_back(11);
	numeros.push_back(20);
	numeros.push_back(17);
	numeros.push_back(22);
	numeros.push_back(0);

	numeros.pop_back();


	cout << "numeros contem ";
	cout << int(numeros.size());
	cout << " elementos.";
	cout <<  endl;

	cout << "valores em numeros:";
  	for (vector<int>::iterator it = numeros.begin() ; 
			it != numeros.end(); 
								++it) {
    	std::cout << ' ' << *it;
	}
	cout << endl;

  	for (vector<int>::iterator it = numeros.begin() ; 
			it != numeros.end(); 
								++it) {
    	if (*it % 2 == 0) {
			pares.push_back(*it);
		} else {
			impares.push_back(*it);
		}
	}

  	for (vector<int>::iterator it = pares.begin() ; 
			it != pares.end(); 
								++it) {
    	std::cout << ' ' << *it;
	}
	cout << endl;

  	for (vector<int>::iterator it = impares.begin() ; 
			it != impares.end(); 
								++it) {
    	std::cout << ' ' << *it;
	}
	cout << endl;


	return 0;
}


















