#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double a, b, c,d;
	cout << "������� a = ";
	cin >> a; 
	cout << "������� b = ";
	cin >> b;
	cout << "������� � = ";
	cin >> c;
	d = b*b-4*a*c;
	if (d < 0)
	{
		cout << "��� ������! ������������ �������������!" << endl;
		
	}
	else {
		double x1, x2;
		x1 = (-b + sqrt(d) / 2 * a);
		x2 = (-b - sqrt(d) / 2 * a);
		cout << "x1 = " << x1<<endl;
		cout << "x2 = " << x2 << endl;
	}



}