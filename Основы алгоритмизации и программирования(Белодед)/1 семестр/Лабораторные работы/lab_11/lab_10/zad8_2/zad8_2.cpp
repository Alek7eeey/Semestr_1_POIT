#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL,"Rus");

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

	B ^= 7 << m; //7 = 0111, т.е. три бита
	B |= ((A & (7 << n)) >> n) << m;
	_itoa_s(B, arr, 2); cout << "B=" << arr << endl;
	





}