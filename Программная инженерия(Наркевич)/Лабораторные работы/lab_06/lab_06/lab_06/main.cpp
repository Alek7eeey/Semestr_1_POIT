#include "hello_h.h"
#include <iostream>
using namespace std;

int choice;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "��������, ��� ���������� ������� � ����� ���������:" << endl << endl;
	cout << "1.����������� ������� �������� ����� � Windows-1251 ����� ���������� �������� � ��������� � �������� ���������; " << endl << endl;
	cout << "2.����������� ������� �������� ����� � Windows-1251 ����� �������� �������� � ��������� � �������� ���������; " << endl << endl;
	cout << "3.����� � ������� ���� �������, ���������������� ��������� �����;" << endl << endl;
	cout << "4.����� �� ���������." << endl << endl;

	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		latinLetter();

		break;
	}
	case 2:
	{
		russianLetter();

		break;
	}

	case 3:
	{	numberNum();

	break;
	}
	case 4:
	{
		break;
	}
	default:
	{
	  error();

	   break;
	}
}


}


