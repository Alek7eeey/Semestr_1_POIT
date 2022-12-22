
/*Дан массив A из n элементов и B из m элементов. 
Содержится ли наибольший элемент массива A в массиве B? */

#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n, m;

	cout << "Введите количество элементов массива А: ";
	cin >> n;

	cout << "Введите количество элементов массива B: ";
	cin >> m;

	cout << endl;

	int* arrA = new int[n];
	int* arrB = new int[m];

	cout << "Массив А из " << n << " элементов" << endl;

	for (int i = 0; i < n; i++)
	{
		arrA[i] = rand() % 15;
		cout << arrA[i] << " ";
	}

	cout << endl;

	cout << endl;
	cout << "Массив B из " << m << " элементов: " << endl;

	for (int i = 0; i < m; i++)
	{
		arrB[i] = rand() % 15;
		cout << arrB[i] << " ";
	}

	cout << endl;

	int max_size = arrA[0];
	int num_max_size = 0;

	for (int i = 0; i < n; i++)
	{
		if (arrA[i] >= max_size)
		{
			max_size = arrA[i];
			num_max_size = i + 1;
		}

	}
	cout << endl;
	cout << "Максимальный элемент = " << max_size << ", находится под номером " << num_max_size << endl;
	cout << endl;
	
	for (int i = 0; i < m; i++)
	{
		if (arrB[i]==max_size)
		{
			cout << "Наибольший элемент " << max_size << " содержится в массиве B!" << endl;
			goto the_end;
		}

	}

	cout << "Наибольший элемент " << max_size << " не содержится в массиве B!" << endl;
	
    
    the_end:
	cout << endl;






	delete[] arrA; delete[] arrB;
}