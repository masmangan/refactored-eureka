// marco.mangan@pucrs.br
// Apresenta um histograma para duas variáveis inteiras.

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
  
  cout << "**********" << endl;
  
  return 0;
}
