#include <string>

using namespace std;

struct tproduto {
    string ean;
    string descricao;
    float unitario;
    string validade;
};

int main() {
    struct tproduto p1;

    p1.ean = "7898097961013";
    p1.descricao = "Macarrão de arroz";
    p1.unitario = 6.78;
    p1.validade = "2019-05-04";
    return 0;
}
