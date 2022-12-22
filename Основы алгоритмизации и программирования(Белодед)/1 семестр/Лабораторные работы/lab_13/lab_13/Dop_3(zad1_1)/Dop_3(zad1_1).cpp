/*Написать программу, реализующую вставку в строку n символов,
начиная с позиции k. */

#include<iostream>
#include<string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char string[] = "Hello, how are you?";
	char symbol;
	int k,n;
	
	cout << "Строка: " << string << endl;

	cout << "Введите количество символов для заполнения: " << " ";
	cin >> n;

	cout << "Введите позицию: " << " ";
	cin >> k;

	cout << "Введите символ для заполнения: " << " ";
	cin >> symbol;

	cout << "Новая строка: " << " ";

	for (int i = 0; i < strlen(string); i++)
	{
		if ( (i + 1) >= k && ( i + 1 ) < k+n ) 
		{
			string[i] = symbol;
		}
		cout << string[i];
	}

	

	cout << endl;
	
	
	


}