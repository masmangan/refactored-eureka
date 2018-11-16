/*
Urna eletrônica

Simulador em:
http://www.tse.jus.br/eleicoes/eleicoes-2018/simulador-de-votacao-na-urna-eletronica

Parte I
Ler candidatos e números de candidatos de um arquivo chamado candidatos.txt.

EDITADO: trocar vector por map

Ver:
http://www.cplusplus.com/reference/map/map/find/

*/
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <map>


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


void gravar(vector<int> votos) {
    ofstream boletim;
    cout << "Gravando..." << endl;

    boletim.open("boletim.txt");

    boletim << "Resultados" << endl;
    for(int i = 0; i < votos.size(); i++) {
        boletim << votos[i] << endl;
    }

    boletim.close();

}

void carregar(map<int, cand> &tabela) {
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
        //tabela.insert(std::pair<int,cand>(numero,c));
        //tabela[numero] = c;
        tabela.insert(make_pair(numero,c));

        candidatos >> numero;
        candidatos >> partido;
        candidatos >> nome_candidato;
        candidatos >> nome_vice;

    }
    candidatos.close();

}

//void mostrar(vector<cand> lista) {
//    for(int i = 0; i < lista.size(); i++) {
//        cout << lista[i].numero << ", " << lista[i].partido << ", " << lista[i].nome_candidato << ", " << lista[i].nome_vice << endl;
//    }
//}

void mostra_op(int op, map<int, cand> tabela) {

    map<int, cand>::iterator it;

    it = tabela.find(op);

    if (it == tabela.end()) {
        cout << "*** Número errado! VOTO NULO." << endl;
    } else {
        cand c1 = get<1>(*it);
        cout << c1.numero << ", " << c1.partido << ", " << c1.nome_candidato << ", " << c1.nome_vice << endl;

    }


}

void resultados(vector<int> votos, map<int, cand> tabela) {
    std::multimap<int,int> freq;
    std::multimap<int,int>::iterator it;
	int invalidos = 0;

    cout << "Resultados" << endl;
    for(int i = 0; i < votos.size(); i++) {
        //cout << votos[i] << endl;
        freq.insert(make_pair(votos[i], 0));
    }


    for(it = freq.begin(); it != freq.end(); it = freq.upper_bound(it->first)) {
		if (tabela.find(it->first) == tabela.end()) {
			invalidos++;
		} else {
        	cout << it->first << ", " << freq.count(it->first) << endl;
		}
    }

	if (invalidos > 0) {
		cout << "inválidos, " << invalidos << endl;
	}


}

void eleicao(vector<int> & votos, map<int, cand> tabela) {
    int op;
    int conf;

    while (1) {

        do {
        cout << "Governador" << endl;
        cout << "Digite sua opção:" << endl;
        cin >> op;
        if (op == 0) {
            goto END;
        }
        mostra_op(op, tabela);

            cout << "1 - Confirma ou 2 - Corrige" << endl;
            cin >> conf;
        } while (conf != 1);

        cout << "FIM! Votou!" << endl;
        votos.push_back(op);
        gravar(votos);

    }
	END:
    cout << "Fim da votação!" << endl;

}

int main() {

    vector<int> votos;
    map<int, cand> tabela;

    carregar(tabela);
    //mostrar(candidatos);

    eleicao(votos, tabela);
    resultados(votos, tabela);

    return 0;
}












