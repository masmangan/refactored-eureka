#include <iostream>

using namespace std;

int main() {
	int n;
	int sp, si;
	int cp, mi;
	sp = 0;	// soma dos pares
	si = 0;
	cp = 0;	// contador dos pares
	mi = 0; // maior ímpar

	cout << "Início" << endl;
	cin >> n;

	while (n != 9999) {
		if (n % 2 == 0) {
			sp = sp + n;
			cp = cp + 1;
		} else {
			si = si + n;
			if (n > mi) {
				mi = n;
			}
		}
		cin >> n;

	}
	cout << sp << " " << si << endl;
	cout << mi << " " << 1.0f * sp / cp << endl;
	cout << "Fim" << endl;

	return 0;
}
























