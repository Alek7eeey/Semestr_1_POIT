#include <iostream>
#include <stdlib.h> 
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int num;
	char arr[10];
	cout << "Введиет число: "; 
	cin >> num;
	_itoa_s(num , arr, 2);
	cout << "Число в двоичном коде: " << arr << endl;
	if (num % 4 == 0)
		cout << "Число кратно 4!" << endl;
	else
		cout << "Число не кратно 4!" << endl;

	}