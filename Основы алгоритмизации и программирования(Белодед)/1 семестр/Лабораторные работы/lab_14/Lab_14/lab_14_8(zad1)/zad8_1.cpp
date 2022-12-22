
/*Даны две целочисленные матрицы A(n, m) и B(n, m). 
Подсчитать количество тех пар (a[i][j] ,b[i][j] ), 
для которых:
а) a[i][j]<b[i][j]; 
б) a[i][j] = b[i][j]; 
в) a[i][j] > b[i][j] 
*/

#include <iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	const int ROW = 3;
	const int COL = 4;

	int arrA[ROW][COL], arrB[ROW][COL];


	cout << "\t Матрица А: " << endl << endl;
	
	for (int i = 0; i < ROW; i++) /*Заполнение матрицы А*/
	{
		for (int j = 0; j < COL; j++)
		{
			arrA[i][j] = rand() % 15;
			
		}
	}

	for (int i = 0; i < ROW; i++) /*Вывод матрицы А*/
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arrA[i][j]<<"\t";
		}
		cout << endl;
	}

	cout << endl<<endl;
	cout << "\t Матрица B: " << endl<<endl;

	for (int i = 0; i < ROW; i++) /*Заполнение матрицы В*/
	{
		for (int j = 0; j < COL; j++)
		{
			arrB[i][j] = rand() % 15;

		}
	}

	for (int i = 0; i < ROW; i++)  /*Вывод матрицы В*/
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arrB[i][j] << "\t";
		}
		cout << endl;
	}

	int a = 0; 
	for (int i = 0; i < ROW; i++) /* a[i][j] < b[i][j] */
	{
		for (int j = 0; j < COL; j++)
		{
			if (arrA[i][j] < arrB[i][j])
			{
				a++;
			}

		}
	}

	int b = 0;
	for (int i = 0; i < ROW; i++)  /* a[i][j] == b[i][j] */
	{
		for (int j = 0; j < COL; j++)
		{
			if (arrA[i][j] == arrB[i][j])
			{
				b++;
			}

		}
	}

	int c = 0;
	for (int i = 0; i < ROW; i++)  /* a[i][j] > b[i][j] */
	{
		for (int j = 0; j < COL; j++)
		{
			if (arrA[i][j] > arrB[i][j])
			{
				c++;
			}

		}
	}
	cout << endl;
	cout << "а) " << a << endl << "б) " << b << endl << "c) " << c << endl;






	cout << endl;
}