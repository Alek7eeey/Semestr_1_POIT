#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL,"Rus");

	char arr[33];
	int A, B, n, m;
	
	cout << "������ ����� �="; cin >> A;
	cout << "������� n="; cin >> n;
	cout << "������ ����� �="; cin >> B;
	cout << "������� m="; cin >> m;

	_itoa_s(A, arr, 2);
	cout << "A ( � 2-�� ������� ��������� ) = " << arr << endl;

	_itoa_s(B, arr, 2);
	cout << "B ( � 2-�� ������� ��������� ) = " << arr << endl;

	B ^= 7 << m; //7 = 0111, �.�. ��� ����
	B |= ((A & (7 << n)) >> n) << m;
	_itoa_s(B, arr, 2); cout << "B=" << arr << endl;
	





}