#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	
	char symbol_A, symbol_B; // char — это целочисленный тип данных, который используется для представления символов.
	int choice, code_difference, Symbol_A1;
	
	
	
	cout << "Выберите, что необходимо сделать с вашим элементом:" << endl<<endl;
	cout << "1.Определение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании; " << endl<<endl;
	cout << "2.Определение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании; " << endl<<endl;
	cout << "3.Вывод в консоль кода символа, соответствующего введённой цифре;" << endl<<endl;
	cout << "4.Выход из программы." << endl<<endl;
	
	cin >> choice;
	
	switch  (choice)
	{
	
	case 1:  {
		cout << "Введите с клавиатуры заглавную букву латинского алфавита" << endl;
		cin >> symbol_A;
		cout << "Введите с клавиатуры строчную букву латинского алфавита" << endl;
		cin >> symbol_B;


		code_difference = abs(symbol_B - symbol_A);
		
		cout << "разницы значений кодов букв латинского алфавита в прописном и строчном написании равно = " << code_difference << endl << endl;


		break;
	}
	
	case 2: {
		cout << "Введите с клавиатуры заглавную букву русского алфавита" << endl;
		cin >> symbol_A;
		cout << "Введите с клавиатуры строчную букву русского алфавита" << endl;
		cin >> symbol_B;

		code_difference = abs(symbol_A - symbol_B);

		cout << "разницы значений кодов букв русского алфавита в прописном и строчном написании равно = " << code_difference << endl << endl;

		break;
	}

	case 3: {
		cout << "Введите с клавиатуры цифру" << endl;
		cin >> symbol_A;
		Symbol_A1 = (char)symbol_A;

		cout << "Вы ввели цифру с кодом " << Symbol_A1 << endl;
		break;
	}

	case 4: {

		break;
	}
	
	default: {
		cout << "Введите корректный вариант" << endl;
		break;
	}
	
	}


}