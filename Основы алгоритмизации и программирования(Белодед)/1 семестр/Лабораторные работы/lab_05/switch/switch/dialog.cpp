#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int k;
	cout << "� ��� ���� ������� ���� ����?(1-��,2-���)" << endl;
	cin >> k;
	switch (k)
	{


	case 1: {cout << "�����?(1-����,2-����,3-�����,4-�����)"<<endl;
		cin >> k;
		switch (k)


		{
		case 1: cout << "��� ���� ��������, �� ������ ������� �����"<<endl; break;
		case 2: cout << "��� ���� ��������, �� ������ ������� �������"<<endl; break;
		case 3: cout << "��� ���� ��������, �� ������ ������ ������� ������������..."<<endl; break;
		case 4: cout << "��� ���� ��������, �� ����� ��������� ����..."<<endl; break;
		default: cout << "������������ �������" << endl;
		} break;
	}

	case 2: cout << "��� ���� �������� ������ ���� ���� ��-������!"<<endl; break;
	default: cout << "������������ �������"<<endl; break;
	}

	}