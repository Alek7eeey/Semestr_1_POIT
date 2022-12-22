#include "hello_h.h"
#include <iostream>
using namespace std;

int choice;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Выберите, что необходимо сделать с вашим элементом:" << endl << endl;
	cout << "1.Определение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании; " << endl << endl;
	cout << "2.Определение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании; " << endl << endl;
	cout << "3.Вывод в консоль кода символа, соответствующего введенной цифре;" << endl << endl;
	cout << "4.Выход из программы." << endl << endl;

	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		latinLetter();

		break;
	}
	case 2:
	{
		russianLetter();

		break;
	}

	case 3:
	{	numberNum();

	break;
	}
	case 4:
	{
		break;
	}
	default:
	{
	  error();

	   break;
	}
}


}


