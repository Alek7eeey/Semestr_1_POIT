#include <Iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	float y, z, a = 1.4e-3, b = 2.5, m = 3, j[] = {0.7,-2, 2.9};
	cout << "Цикл for: " << endl;
	for (int i = 0; i < 3; i++) {
		y = m * j[i] / tan(a) - exp(10 * m);
		z = 2 * y * b + sqrt(a + b);
		cout << "y = " << y;
		cout << "\nz = " << z << endl << endl;
	}

}