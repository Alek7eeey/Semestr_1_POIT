//ВАРИАНТ4
#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A; char tmp[33];
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде = " << tmp << endl;
	if ((A & 3) == 0)
		cout << "Число кратно 4" << endl;
	else
		cout << "Число не кратно 4" << endl;
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
//	cout << "Введите число ";
//	cin >> A;
//	cout << "Введите число битов ";
//	cin >> n;
//	for (i = 0; i < n; i++) {
//		mask = mask + pow(2, i);
//	}
//	cout << "Введите с какой позиции ";
//	cin >> p;
//	_itoa_s(A, tmp, 2);
//	cout << "Число в двоичном виде = " << tmp << endl;
//	_itoa_s((mask << p - n), tmp, 2);
//	cout << "Маска = " << tmp << endl;
//	_itoa_s(A | ((mask << p -1)), tmp, 2);
//	cout << "Итоговое число = " << tmp << endl;
//
//}