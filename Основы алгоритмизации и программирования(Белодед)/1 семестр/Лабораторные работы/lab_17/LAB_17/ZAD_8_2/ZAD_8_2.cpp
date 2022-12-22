
/*Проверить, есть ли в матрице хотя бы один столбец,
содержащий отрицательный элемент, и найти его номер.
Уменьшить элементы найденного столбца вдвое. */

#include <iostream>
using namespace std;



void function(int **arr, int row, int col)
{
	int num_col = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] < 0)
			{
				num_col = j;
				break;
			}
		}
	}

	cout << "\nНомер столбца, в котором содержится первый отрицательный элемент = " << num_col + 1 << endl;

	cout << "\nМатрица после уменьшения " << num_col + 1 << " столбца в два раза: " << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (j == num_col)
			{
				arr[i][j] = arr[i][j] / 2;
			}
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}





void main()
{
	setlocale(LC_ALL, "Rus");

	int row, col;

	cout << "Введите количество строк и столбцов матритрицы (через пробел): " << endl;
	cin >> row >> col;

	int** arr = new int* [row];                  /*создание массива*/

	for (int i = 0; i < row; i++)
		arr[i] = new int[col];



	cout << "\n" << "Введите элементы массива(через пробел по " << col << " элементов в строку): " << endl;

	for (int i = 0; i < row; i++)               /*заполнение массива*/
	{
		for (int j = 0; j < col; j++)
		{
			cin >> arr[i][j];
		}

		cout << endl;
	}



	cout << "\n \t" << "Матрица:" << endl;
	for (int i = 0; i < row; i++)            /*вывод массива*/
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}

		cout << endl;
	}

	function(arr, row, col);  //вызов функции

	for (int i = 0; i < row; i++) /*удаление массива*/
	{
		delete[] arr[i];
	}

	delete[] arr;

	cout << endl;
}