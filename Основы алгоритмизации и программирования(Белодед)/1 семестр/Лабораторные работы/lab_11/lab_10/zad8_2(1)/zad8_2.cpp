
/*2.	������� 3 ���� ����� �, ������� � ������� n, � �������� � ����� �, ������� � ������� m.*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

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

	

	int maskA = (A >> n) & 7; //7 = 0111, �.�. ��� ����  | - ��������(�), & - ��������� (���)

	int maskB = ~(7 << m);
	 
	_itoa_s((B & maskB) | (maskA << m), arr, 2); cout << "B_after = " << arr << endl;



	

}
//101110
//111000
//101
//101111
// 00011
//100011
// 10100