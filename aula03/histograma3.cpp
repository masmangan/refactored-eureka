// marco.mangan@pucrs.br
// Apresenta um histograma para uma variável inteira.

#include <iostream>
using namespace std;
int main() 
{
  int n, m;
  cout << "Informe dois valores inteiros: ";
  cin >> n;
  cin >> m;

  if (n > m) {
    int temp = n;
    n = m; 
    m = temp;
  }

  int i = 0;
  while (i < n*10.0/m)
  {
    cout << "*";
    i++;
  }
  cout << n;
  cout << endl;
  cout << "**********" << m << endl;

  return 0;
}
