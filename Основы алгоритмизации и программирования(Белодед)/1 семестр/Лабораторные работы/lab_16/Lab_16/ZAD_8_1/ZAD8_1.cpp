
//Дан двумерный массив, состоящий из N строк и М столбцов.
//Найти количество отрицательных,
//положительных и нулевых элементов массива.

#include<iostream>
using namespace std;

void num_min_size(int arr[3][3], int row, int col )
{
	int k=0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j]<0)
			{
				k++;
			}
		}
	}
	if (k==0)
	{
		cout << "отрицательных чисел нет!" << endl;
	}
	else
	{
		cout << k << endl;
	}
		
}



void num_max_size(int arr[3][3], int row, int col)
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

  void num_size_NULL(int arr[3][3], int row, int col)
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
    
	const int rowN = 3;
	const int colM = 3;
	
	int matrix[rowN][colM];


	cout << "Введите элементы матрицы 3x3 (через пробел по " << colM << " элементов в строку): " << endl;

	for ( int i = 0; i < rowN; i++)
	{
		for (int j = 0; j < colM; j++)
		{
			cin >> matrix[i][j];
		}
		
		cout << endl;
	}

	cout << "Mатрица 3х3: " << endl;

	for (int i = 0; i < rowN; i++)
	{
		for (int j = 0; j < colM; j++)
		{
			cout << matrix[i][j] << "\t";
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
		num_min_size(matrix, 3, 3);

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
		num_max_size(matrix, 3, 3);
		
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
		num_size_NULL(matrix, 3, 3);

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
}