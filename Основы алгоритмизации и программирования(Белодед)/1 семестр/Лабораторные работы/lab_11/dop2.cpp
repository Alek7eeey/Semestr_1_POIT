//�������2
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, maskA = 63, maskB = 7;
	maskB = ~maskB;
	cout << "������ ����� �="; cin >> A;
	cout << "������ ����� �="; cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "����� ��� �: " << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2);
	cout << "���������� ���� �: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "����� ��� �: " << tmp << endl;
	_itoa_s((B & maskB) << 2, tmp, 2);
	cout << " ������� ���� � B: " << tmp << endl;
	_itoa_s((((B & maskB) << 2) | ((A & maskA) >> 1)), tmp, 2);
	cout << " ��������� B=" << tmp << endl;
}
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	int A, i, n, p, mask = 0;
//	char tmp[33];
//	cout << "������� ����� ";
//	cin >> A;
//	cout << "������� ����� ����� ";
//	cin >> n;
//	for (i = 0; i < n; i++) {
//		mask = mask + pow(2, i);
//	}
//	cout << "������� � ����� ������� ";
//	cin >> p;
//	_itoa_s(A, tmp, 2);
//	cout << "����� � �������� ���� = " << tmp << endl;
//	_itoa_s((mask << p - n), tmp, 2);
//	cout << "����� = " << tmp << endl;
//	_itoa_s(A | (mask << p - n), tmp, 2);
//	cout << "�������� ����� = " << tmp << endl;
//}