#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int weather;
	cout << "������� �������� � ������(1 - �������, 2 - ������)" << endl;
	cin >> weather;
	if (weather == 1)
	{
		cout << "������� ����� ������" << endl;
	}

	else if (weather == 2)
	{
		cout << "������� ����� ������ �������" << endl;
	}

	else
	{
		cout << "������������ �������" << endl;

	}
}