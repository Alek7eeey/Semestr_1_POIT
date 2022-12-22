#include <iostream>
#include <math.h>

using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, i, n, p, mask = 0;
	char tmp[33];
	cout << "Введите число битов ";
	cin >> n;
	for (i = 0; i < n; i++) {
		mask = mask + pow(2, i);
	}
	cout << "Введите с какой позиции влево ";
	cin >> p;
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде = " << tmp << endl;
	_itoa_s(mask << p - 1, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A >> p - 1) & (mask), tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s((~((A >> p - 1) & (mask)) & mask), tmp, 2);
	cout << "Конвертированные биты А: " << tmp << endl;
	_itoa_s((A & ~(mask << p-1)), tmp, 2);
	cout << "Число с нулевыми битами = " << tmp << endl;
	_itoa_s(((~((A >> p - 1) & (mask)) & mask)<< p -1), tmp, 2);
	cout << "Конвертированные биты А: " << tmp << endl;
	_itoa_s(((A & ~(mask << p - 1)))| ((~((A >> p - 1) & (mask)) & mask) << p - 1), tmp, 2);
	cout << "Конечное число А: " << tmp << endl;
}