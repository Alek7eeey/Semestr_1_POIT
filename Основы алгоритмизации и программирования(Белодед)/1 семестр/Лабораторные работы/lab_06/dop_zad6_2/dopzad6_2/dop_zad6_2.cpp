#include<iostream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double s, n, p, g, sum = 0;
	
	cout << "������� ���������� ��������� ������������ � ������ ���" << endl;
	cin >> s;
	
	cout << "�� ���������� ������� ��� �� ��������� ������������? " << endl;
	cin >> n;
	
	cout << "����� ������� �����������(� %)?" << endl;
	cin >> p;
	
	g = 0;

	while (g <= n)
	{
		sum = (n * s) - ((p/10) * s * n);
		g++;
	}

	cout << "����� ������������ ������������ �� " << n << " ���(����), ����� " << sum <<" ���.���" << endl;
}