#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	double a, b, c, p, S;
	cout << "Введите длины трёх сторон треугольника:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Площадь треугольника равна = "<< S << endl<<endl;

}

