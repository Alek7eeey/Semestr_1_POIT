//ВАРИАНТ2
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, maskA = 63, maskB = 7;
	maskB = ~maskB;
	cout << "Первое число А="; cin >> A;
	cout << "Второе число В="; cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	_itoa_s((B & maskB) << 2, tmp, 2);
	cout << " Очищены биты в B: " << tmp << endl;
	_itoa_s((((B & maskB) << 2) | ((A & maskA) >> 1)), tmp, 2);
	cout << " Результат B=" << tmp << endl;
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
//	_itoa_s(A | (mask << p - n), tmp, 2);
//	cout << "Итоговое число = " << tmp << endl;
//}