#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	float y[] = { 0.3, 1, 0.7, 4 }, z, a = 1.4e-3, b = 2.5, m[] = { 7.3,-2,0.8 }, j;
	cout << "Цикл do while: " << endl;
	int i = 0;
	do {
		j = (y[i] + exp(10 * m[i])) / m[i] * tan(a);
		z = 2 * y[i] * b + sqrt(a + b);
		cout <<"\n\n j = " << j << endl;
		cout << " z = " << z << endl << endl;
		i++;
	} while (i < 3);


}
