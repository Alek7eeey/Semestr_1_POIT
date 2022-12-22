#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	float y, z, a = 1.4e-3, b = 2.5, m = 3, j;
	cout << "Цикл while: " << endl;
	j = b;
	while (j <= 3) {
		y = m * j / tan(a) - exp(10 * m);
		z = 2 * y * b + sqrt(a + b);
		j += 0.1;
		cout << "y = " << y;
		cout << "\nz = " << z << endl << endl;
	}

	

}