
//Дан двумерный массив, состоящий из N строк и М столбцов.
//Найти количество отрицательных,
//положительных и нулевых элементов массива.

#include<iostream>
using namespace std;


void min_size(int **arr, int row, int col)
{
	int k = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] < 0)
			{
				k++;
			}
		}
	}
	if (k == 0)
	{
		cout << "отрицательных чисел нет!" << endl;
	}
	else
	{
		cout << k << endl;
	}
}

int max_size(int** arr, int row, int col)
{
	int t = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] > 0)
			{
				t++;
			}
		}
	}
	if (t == 0)
	{
		cout << "положительных чисел нет!" << endl;
	}
	else
	{
		cout << t << endl;
	}
}

int size_null(int** arr, int row, int col)
{
	int f = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == 0)
			{
				f++;
			}
		}
	}
	if (f == 0)
	{
		cout << "числа, которые равны 0 отсутствуют!" << endl;
	}
	else
	{
		cout << f << endl;
	}
}




void main()
{
	setlocale(LC_ALL, "Rus");
	int row,col;
	
	cout << "Введите количество строк и столбцов матритрицы (через пробел): " << endl;
	cin >> row >> col;

	int** arr = new int* [row];                  /*создание массива*/
	
	for (int i = 0; i < row; i++)
		arr[i]=new int [col];
	
	
	
	cout << "\n" << "Введите элементы массива(через пробел по "<<col<<" элементов в строку): " << endl;
	
	for (int i = 0; i < row; i++)               /*заполнение массива*/
	{
		for (int j = 0; j < col; j++)
		{
		   cin>>arr[i][j];
		}

		cout << endl;
	}
	
	
	
	cout << "\n \t" << "Массив:" << endl;

	for (int i = 0; i < row; i++)            /*вывод массива*/
	{
		for (int j = 0; j < col; j++)
		{
			cout<<arr[i][j]<<"\t";
		}

		cout << endl;
	}
	
	cout << endl;
	
	
	
	int choice;

active:

	cout << "Выберите вариант:\n 1)Найти количество отрицательных чисел \n 2)Найти количество положительных чисел \n 3)Найти количество чисел, которые равны нулю" << endl;

	cin >> choice;
	cout << "Ответ: ";

	switch (choice)
	{
	case 1:
	{
		min_size(arr, row, col);

		int in_case1;
		cout << "Желаете выбрать еще один вариант(1-да/2-нет)?" << endl;
		cin >> in_case1;

		switch (in_case1)
		{
		case 1:
		{
			goto active;
		}

		case 2:
		{
			break;
		}


		default:
		{
			break;
		}

		}

	}

	case 2:
	{
		max_size(arr, row, col);

		int in_case1;
		cout << "Желаете выбрать еще один вариант(1-да/2-нет)?" << endl;
		cin >> in_case1;

		switch (in_case1)
		{
		case 1:
		{
			goto active;
		}

		case 2:
		{
			break;
		}


		default:
		{
			break;
		}

		}


	}

	case 3:
	{
		size_null(arr, row, col);

		int in_case1;
		cout << "Желаете выбрать еще один вариант(1-да/2-нет)?" << endl;
		cin >> in_case1;

		switch (in_case1)
		{
		case 1:
		{
			goto active;
		}

		case 2:
		{
			break;
		}


		default:
		{
			break;
		}

		}

		break;
	}

	default:
	{
		cout << "Error!" << endl;
		goto active;
	}


	}



	cout << endl << endl;
	
	 
	
	for (int i = 0; i < row; i++) /*удаление массива*/
	{
		delete[] arr[i];
	}
	
	delete[] arr;
	
	cout << endl;
	
}