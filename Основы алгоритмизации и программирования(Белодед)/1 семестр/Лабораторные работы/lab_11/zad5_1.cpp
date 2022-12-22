#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A; char tmp[33], mask = 126;
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде = " << tmp << endl;
	_itoa_s(mask, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & mask) >> 1, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;

}