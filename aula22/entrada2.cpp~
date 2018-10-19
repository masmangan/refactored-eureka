//http://www.cplusplus.com/reference/fstream/ifstream/open/
#include <iostream>
#include <fstream>

int main () { 
  std::ifstream ifs;
  std::ofstream ofs;

  ifs.open ("dados1.csv");
  ofs.open ("dados2.csv");
 
  if ( ! ifs.is_open() ) {
     std::cerr << "O arquivo não pode ser aberto ou não existe!" << std::endl;
	  return -1;
  }

  int a, b;
  ifs >> a;
  ifs >> b;

  while (ifs.good()) {
	if ( a % 4 != 0) {
        ofs << a << " " << b << std::endl;
	}
    ifs >> a;
    ifs >> b;
  }

  ifs.close();
  ofs.close();

  return 0;
}
