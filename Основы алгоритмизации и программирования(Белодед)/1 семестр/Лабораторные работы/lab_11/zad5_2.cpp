#include <iostream>
#include <math.h>

using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, i, n, p, mask = 0;
	char tmp[33];
	cout << "������� ����� ����� ";
	cin >> n;
	for (i = 0; i < n; i++) {
		mask = mask + pow(2, i);
	}
	cout << "������� � ����� ������� ����� ";
	cin >> p;
	cout << "������� ����� ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "����� � �������� ���� = " << tmp << endl;
	_itoa_s(mask << p - 1, tmp, 2);
	cout << "����� ��� �: " << tmp << endl;
	_itoa_s((A >> p - 1) & (mask), tmp, 2);
	cout << "���������� ���� �: " << tmp << endl;
	_itoa_s((~((A >> p - 1) & (mask)) & mask), tmp, 2);
	cout << "���������������� ���� �: " << tmp << endl;
	_itoa_s((A & ~(mask << p-1)), tmp, 2);
	cout << "����� � �������� ������ = " << tmp << endl;
	_itoa_s(((~((A >> p - 1) & (mask)) & mask)<< p -1), tmp, 2);
	cout << "���������������� ���� �: " << tmp << endl;
	_itoa_s(((A & ~(mask << p - 1)))| ((~((A >> p - 1) & (mask)) & mask) << p - 1), tmp, 2);
	cout << "�������� ����� �: " << tmp << endl;
}