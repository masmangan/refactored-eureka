// ofstream::open / ofstream::close
#include <fstream>      // std::ofstream

int main () {

  std::ofstream ofs;
  ofs.open ("latim.txt", std::ofstream::app);

  ofs << " more lorem ipsum";

  ofs.close();

  return 0;
}
