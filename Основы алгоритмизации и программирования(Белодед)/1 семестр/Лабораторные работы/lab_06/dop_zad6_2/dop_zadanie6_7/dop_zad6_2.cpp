#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double s, n, p, g, sum=0;
	cout << "������� ���������� ��������� ������������ � ������ ���" << endl;
	cin >> s;
	cout << "�� ���������� ������� ��� �� ��������� ������������? " << endl;
	cin >> n;
	cout << "����� ������� �����������(� %)?" << endl;
	cin >> p;
	g = 1;
	
	while (g<=n)
	{
		sum = n*s-0.5*s;
	}
	
	cout << "����� ������������ ������������ �� " << n << "���, ����� " << sum << endl;
}