#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double a, b, c,d;
	cout << "Введите a = ";
	cin >> a; 
	cout << "Введите b = ";
	cin >> b;
	cout << "Введите с = ";
	cin >> c;
	d = b*b-4*a*c;
	if (d < 0)
	{
		cout << "Нет корней! Дискриминант отрицательный!" << endl;
		
	}
	else {
		double x1, x2;
		x1 = (-b + sqrt(d) / 2 * a);
		x2 = (-b - sqrt(d) / 2 * a);
		cout << "x1 = " << x1<<endl;
		cout << "x2 = " << x2 << endl;
	}



}