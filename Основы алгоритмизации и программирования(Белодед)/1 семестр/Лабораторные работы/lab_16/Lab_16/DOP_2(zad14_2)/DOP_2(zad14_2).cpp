
/*Написать программу, определяющую
есть ли во введенном с клавиатуры тексте слово "БГТУ" */

#include<iostream>
#include<windows.h> /*для считывания русских элементов в массиве типа char*/
#include<stdio.h>
using namespace std;


void search(char arr[70])
{
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == 'Б' && arr[i + 1] == 'Г' && arr[i + 2] == 'Т' && arr[i + 3] == 'У')
		{
			cout << "В тексте присутствует слово 'БГТУ'!" << endl;
			break;
		}

		if (i + 1 == strlen(arr))
		{
			cout << "В тексте нет слова 'БГТУ'!" << endl;
		}

	}
}


void main()
{
	
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	
	char arr[70] = "";
	
	cout << "Введите несколько слов в строку, в которых может присутствовать слово  'БГТУ': " << "\t";
	gets_s(arr); /*Ввод строки до нажатия enter*/

	search(arr); //функция

	cout << "\n";
}

