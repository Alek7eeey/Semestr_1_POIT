
/*Написать программу, которая вводит несколько слов текста
и определяет общее количество слов.
Слова разделены пробелами.*/

#include<iostream>
using namespace std;


void function(char string)
{

	int f = 0;

	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == ' ' && string[i] != '\0')
		{
			f++;
		}
	}
	
	cout << "Вы ввели " << f + 1 << " слов(а)" << endl;
}



void main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Введите несколько слов через пробелы: " << endl;
	
	char arr[100];
	
	cin.get(arr,80); /*ввод элементов в одну строку*/
	
	function(*arr); /*функция*/

}