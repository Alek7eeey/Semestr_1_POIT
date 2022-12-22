
/*2.	Извлечь 3 бита числа А, начиная с позиции n, и вставить в число В, начиная с позиции m.*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	char arr[33];
	int A, B, n, m;

	cout << "Первое число А="; cin >> A;
	cout << "Позиция n="; cin >> n;
	cout << "Второе число В="; cin >> B;
	cout << "Позиция m="; cin >> m;
	
	_itoa_s(A, arr, 2);
	cout << "A ( в 2-ой системе счисления ) = " << arr << endl;

	_itoa_s(B, arr, 2);
	cout << "B ( в 2-ой системе счисления ) = " << arr << endl;

	

	int maskA = (A >> n) & 7; //7 = 0111, т.е. три бита  | - сложение(и), & - умножение (или)

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