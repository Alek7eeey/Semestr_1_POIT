#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	cout << "������� ��� ����� �����" << endl;
	cin >> a;
	cin >> b;
	cout << "�������� �������������� ��������:" << endl;
	cout << "1.��������" << endl;
	cout << "2.���������" << endl;
	cout << "3.���������" << endl;
	cout << "4.�������" << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "��������� ��������" << a << "+" << b << "=" << a + b << endl;
        break;
	
	case 2:
		cout << "��������� ���������" << a << "*" << b << "=" << a * b << endl;
		break;
	
	case 3:
		cout << "��������� ���������" << a << "-" << b << "=" << a - b << endl;
		break;

	case 4:
		cout << "��������� �������" << a << "/" << b << "=" << a / b << endl;
		break;

	default:
			cout << "ERROR! ������� ���������� �������" << endl;
			break;
	}




}