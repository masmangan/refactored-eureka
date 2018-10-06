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
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;
    vector<int> pares;
    vector<int> impares;
	int valor;

    cout << "STL C++ Vector" << endl;

	do {
		cin >> valor;
		numeros.push_back(valor);
	} while (valor);
    numeros.pop_back();

    cout << "numeros = ";
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

	sort(pares.begin(), pares.end());
	sort(impares.begin(), impares.end());


    for (vector<int>::iterator it = pares.begin() ;
            it != pares.end();
            ++it) {
        cout << ' ' << *it;
    }
    cout << endl;

    for (vector<int>::iterator it = impares.begin() ;
            it != impares.end();
            ++it) {
        cout << ' ' << *it;
    }
    cout << endl;


    return 0;
}


















