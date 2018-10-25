/*
Urna eletrônica

Simulador em:
http://www.tse.jus.br/eleicoes/eleicoes-2018/simulador-de-votacao-na-urna-eletronica

Parte I
Ler candidatos e números de candidatos de um arquivo chamado candidatos.txt.

*/
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

class cand {
public:
	int numero;			
	string partido;		
	string nome_candidato;		
	string nome_vice;
	
	cand(int numero, string partido, string nome_candidato, string nome_vice) {
		this->numero = numero;
		this->partido = partido;
		this->nome_candidato = nome_candidato;
		this->nome_vice = nome_vice;
	}
	
};


void carregar(vector<cand> & lista) {
	int numero;			// número do candidato, ex. 91
	string partido;		// nome do partido, ex. PMus
	string nome_candidato;		// nome do candidato
	string nome_vice;		// nome do vice

	ifstream candidatos;

	candidatos.open("candidatos.txt");
	
	if ( ! candidatos.is_open() ) {
		cerr << "Erro ao abrir arquivo de entrada!" << endl;
		exit(-1);
	}
	
	candidatos >> numero;
	candidatos >> partido;
	candidatos >> nome_candidato;
	candidatos >> nome_vice;	 

	while (candidatos.good()) {
	
		//cout << numero << ", " << partido << ", " << nome_candidato << ", " << nome_vice << endl;
		
		cand c(numero, partido, nome_candidato, nome_vice);
		lista.push_back(c);
		
		candidatos >> numero;
		candidatos >> partido;
		candidatos >> nome_candidato;
		candidatos >> nome_vice;	 
	
	}
	candidatos.close();

}

void mostrar(vector<cand> lista) {
	for(int i = 0; i < lista.size(); i++) {
		cout << lista[i].numero << ", " << lista[i].partido << ", " << lista[i].nome_candidato << ", " << lista[i].nome_vice << endl;
	}

}

int main() {

	vector<cand> lista;
	
	carregar(lista);
		
	mostrar(lista);		

	return 0;
}




















