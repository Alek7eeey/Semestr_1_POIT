#include<iostream>;
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double b, z, x = 4 * pow(10, -3), s = 1.1, j;
	cout << "¬ведите число j" << endl;
	cin >> j;
	b = s + (5 * x + j);
	if (b < 1.5)

		z = sqrt(x + 0.3 * j) + b;
	else
		z = abs(x * j + b);

	cout << "j=" << j << "\nz=" << z << endl;


}