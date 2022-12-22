#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double d, S;
	cout << "Введите длину диагонали квадрата: ";
		cin >> d;
		S = 0.5 * pow(d, 2);
		cout << "Площадь квадрата равна = " << S << endl;

}
