//�������4
#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A; char tmp[33];
	cout << "������� ����� ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "����� � �������� ���� = " << tmp << endl;
	if ((A & 3) == 0)
		cout << "����� ������ 4" << endl;
	else
		cout << "����� �� ������ 4" << endl;
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
//	_itoa_s(A | ((mask << p -1)), tmp, 2);
//	cout << "�������� ����� = " << tmp << endl;
//
//}