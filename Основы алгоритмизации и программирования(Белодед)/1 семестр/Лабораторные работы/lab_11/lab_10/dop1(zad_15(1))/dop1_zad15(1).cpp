//��������� ������� �������� ���������, ������ �� ���� ����� �.

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char arr[15];
	int A;
	cout << "������� ����� �: "; cin >> A;
	
	_itoa_s(A, arr, 2);
	cout << "����� � �������� ����: " << arr << endl;

	if ((A % 2) == 0)
	{
		cout << "����� ������ 2" << endl;
	}
	else
	{
		cout << "����� �� ������ 2" << endl;
	}




}