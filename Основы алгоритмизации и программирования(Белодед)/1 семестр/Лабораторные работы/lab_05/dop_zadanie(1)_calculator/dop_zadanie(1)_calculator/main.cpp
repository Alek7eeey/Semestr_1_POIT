#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	cout << "Введите два целых числа" << endl;
	cin >> a;
	cin >> b;
	cout << "Выберите математическую операцию:" << endl;
	cout << "1.Сложение" << endl;
	cout << "2.Умножение" << endl;
	cout << "3.Вычитание" << endl;
	cout << "4.Деление" << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "Результат сложения" << a << "+" << b << "=" << a + b << endl;
        break;
	
	case 2:
		cout << "Результат умножения" << a << "*" << b << "=" << a * b << endl;
		break;
	
	case 3:
		cout << "Результат вычитания" << a << "-" << b << "=" << a - b << endl;
		break;

	case 4:
		cout << "Результат деления" << a << "/" << b << "=" << a / b << endl;
		break;

	default:
			cout << "ERROR! Введите корректный вариант" << endl;
			break;
	}




}