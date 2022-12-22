//Используя битовые операции проверить, кратно ли двум число А.

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char arr[15];
	int A;
	cout << "Введите число А: "; cin >> A;
	
	_itoa_s(A, arr, 2);
	cout << "Число в двоичном виде: " << arr << endl;

	if ((A % 2) == 0)
	{
		cout << "Число кратно 2" << endl;
	}
	else
	{
		cout << "Число не кратно 2" << endl;
	}




}