#include <stdio.h>
#include <iostream>

using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int a, b, c;

	cout << "Введите число a: "; cin >> a;
	cout << "\nВведите число b: "; cin >> b;

	
	cout << "Выберите одну из функций(1 - '+'; 2 - '-'; 3 - '*'; 4 - '/'; 5 - '%' "; cin >> c;
	int del = a / b;
	switch (c) {
	case 1:
		printf("a + b = %d", a + b);
		break;
	case 2:
		printf("a - b = %d", a - b);
		break;
	case 3:
		printf("a * b = %d", a * b);
		break;
	case 4:
		cout << "a / b = " << del; 
		break;
	case 5:
		cout << "a % b = " << a % b;
		break;
	}





}