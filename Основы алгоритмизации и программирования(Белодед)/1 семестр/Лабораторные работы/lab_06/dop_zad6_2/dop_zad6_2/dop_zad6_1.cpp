#include<iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double p, Q, days;
	cout << "������� ������� ������ � ������ ������� ���� P(���.���.):" << endl;
	cin >> p;
	cout << "������� �������� �������� Q(���.���.):" << endl;
	cin >> Q;
	
	days = 1;
	do
	{
		
		p = p + 0.3 * p;
		days++;

	} while (p <= Q);
	
	cout << "���������� ����: " << days + 1 << " ����" << endl;
	cout << "������� �����: " << p+0.3*p << " ���.���." << "\n\n";
	
}