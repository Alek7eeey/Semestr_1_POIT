
//	Установить в 0 n битов в числе А влево от позиции p.

#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	int A,i, p, n ;
	char arr[15];
	cout << "Введите число А: "; cin >> A;
	
	_itoa_s(A, arr, 2);
	cout << "Число A в двоичном виде = " << arr << endl;
	cout << endl;

	cout << "Введите позицию p: "; cin >> p;
	cout << "Введите количество битов: "; cin >> n;

	for (int i = ((p-1)-(n-1)); i <= (p-1); i++)
	{
			arr[i] = '0';
	}

	cout << arr << endl << endl;



}