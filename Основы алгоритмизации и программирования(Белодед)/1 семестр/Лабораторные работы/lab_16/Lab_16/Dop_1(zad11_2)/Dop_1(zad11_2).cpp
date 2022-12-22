
/*Преобразовать строку: после каждой буквы c добавить символ * */

#include<iostream>

using namespace std;



char str[70];

int strlen(char* arr) {//функция подсчета длины строки
	
	int count = 0, i = 0;
	
	while (arr[i] != NULL) {//пока следующий элемент не равен NULL
		i++;
		count++;
	}
	return count;
}


void function(int POSITION, int LENGTH) {//функция вставки символа
	
	for (int i = LENGTH; i > POSITION; i--) {//перемещаем все на один символ вправо
		str[i] = str[i - 1];
	}
	str[POSITION] = '*'; //вставляем в освободившееся места символ *
}



void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите строку с текстом: ";
	
		
	cout << "Введите строку с символами, в которых присутствует буква 'c' : ";
	
	cin >> str;
	
	int length = strlen(str);//вычисление длины строки
	
	for (int i = 0; i < length; i++)
	{
		
		while (str[i] != 'c' && i < length) //ищем символ c
			i++;
		
		if (i < length) 
		{
			i++;
			function(i, length);
			length++;
		}
	}
	
	cout << str << endl;


	cout << endl;
}





/*cin.get(arr, 80); ввод элементов в одну строку
	
char string_new[160];

for (int i = 0; i <= '\0'; i++)
{
	if (arr[i] == 'c' || arr[i] == 'C')
	{
		string_new[i] = arr[i];
		string_new[i + 1] = '*';
		i++;
	}

	else
	{
		string_new[i] = arr[i];
	}
}

for (int i = 0; i < strlen(string_new); i++)
{
	cout << string_new[i];
}



cout << endl; */