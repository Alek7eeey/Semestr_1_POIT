#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	
	char symbol_A, symbol_B; // char � ��� ������������� ��� ������, ������� ������������ ��� ������������� ��������.
	int choice, code_difference, Symbol_A1;
	
	
	
	cout << "��������, ��� ���������� ������� � ����� ���������:" << endl<<endl;
	cout << "1.����������� ������� �������� ����� � Windows-1251 ����� ���������� �������� � ��������� � �������� ���������; " << endl<<endl;
	cout << "2.����������� ������� �������� ����� � Windows-1251 ����� �������� �������� � ��������� � �������� ���������; " << endl<<endl;
	cout << "3.����� � ������� ���� �������, ���������������� �������� �����;" << endl<<endl;
	cout << "4.����� �� ���������." << endl<<endl;
	
	cin >> choice;
	
	switch  (choice)
	{
	
	case 1:  {
		cout << "������� � ���������� ��������� ����� ���������� ��������" << endl;
		cin >> symbol_A;
		cout << "������� � ���������� �������� ����� ���������� ��������" << endl;
		cin >> symbol_B;


		code_difference = abs(symbol_B - symbol_A);
		
		cout << "������� �������� ����� ���� ���������� �������� � ��������� � �������� ��������� ����� = " << code_difference << endl << endl;


		break;
	}
	
	case 2: {
		cout << "������� � ���������� ��������� ����� �������� ��������" << endl;
		cin >> symbol_A;
		cout << "������� � ���������� �������� ����� �������� ��������" << endl;
		cin >> symbol_B;

		code_difference = abs(symbol_A - symbol_B);

		cout << "������� �������� ����� ���� �������� �������� � ��������� � �������� ��������� ����� = " << code_difference << endl << endl;

		break;
	}

	case 3: {
		cout << "������� � ���������� �����" << endl;
		cin >> symbol_A;
		Symbol_A1 = (char)symbol_A;

		cout << "�� ����� ����� � ����� " << Symbol_A1 << endl;
		break;
	}

	case 4: {

		break;
	}
	
	default: {
		cout << "������� ���������� �������" << endl;
		break;
	}
	
	}


}