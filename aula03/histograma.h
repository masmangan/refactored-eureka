// marco.mangan@pucrs.br
// Apresenta um histograma para uma variável inteira.

#include <iostream>
using namespace std;
int main() 
{
  int n;
  cout << "Informe um valor inteiro: ";
  cin >> n;

  int i = 0;
  while (i < n)
  {
    cout << "*";
    i++;
  }
  cout << endl;
  return 0;
}
