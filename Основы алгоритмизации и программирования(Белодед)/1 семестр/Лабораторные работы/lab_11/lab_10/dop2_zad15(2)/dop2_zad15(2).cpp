
//	���������� � 0 n ����� � ����� � ����� �� ������� p.

#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	int A,i, p, n ;
	char arr[15];
	cout << "������� ����� �: "; cin >> A;
	
	_itoa_s(A, arr, 2);
	cout << "����� A � �������� ���� = " << arr << endl;
	cout << endl;

	cout << "������� ������� p: "; cin >> p;
	cout << "������� ���������� �����: "; cin >> n;

	for (int i = ((p-1)-(n-1)); i <= (p-1); i++)
	{
			arr[i] = '0';
	}

	cout << arr << endl << endl;



}