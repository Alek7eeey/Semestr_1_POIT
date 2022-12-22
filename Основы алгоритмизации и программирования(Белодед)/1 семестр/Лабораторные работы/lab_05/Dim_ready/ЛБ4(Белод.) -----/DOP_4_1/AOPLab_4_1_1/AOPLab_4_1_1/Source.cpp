#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int m, n, p, k = 0;
	cout << "¬ведите число m: "; cin >> m;
	cout << "\n¬ведите число n: "; cin >> n;
	cout << "\n¬ведите число p: "; cin >> p;
	if (m < 0) {
		k++;
	}
	if (n < 0) {
		k++;
	}
	if (p < 0) {
		k++;
	}

	cout << endl << k << " чисел с минусом" << endl;


}