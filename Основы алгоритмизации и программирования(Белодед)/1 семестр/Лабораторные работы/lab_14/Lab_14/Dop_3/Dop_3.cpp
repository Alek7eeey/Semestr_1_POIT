
/*Путем перестановки элементов квадратной вещественной матрицы добиться того,
чтобы ее максимальный элемент находился в левом верхнем углу,
следующий по величине в позиции (2, 2), 
следующий в позиции (3, 3) и т. д.,
заполнив таким обра-зом всю главную диагональ.*/


#include<iostream>
#include<ctime>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int matrix[5][5], max, maxNumbers[3];
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) 
		{
			if (i == 0)
			{
				max = matrix[0][0];
				matrix[i][j] = rand() % 50;
				cout << matrix[i][j] << " ";
			}
			
			if (j + 1 == 5)
			{
				cout << endl;
			}
			
			if (max < matrix[i][j])
			{
				max = matrix[i][j];
			}
			
			if (i == 4 && j == 4) 
			{
				maxNumbers[0] = max;
				matrix[0][0] = max;
			}
		}
	}
	cout << "\n\n\n";
	for (int i = 0, max2 = -60; i < 5; i++)
	{

		for (int j = 0; j < 5; j++) 
		{
			
			if (matrix[i][j] != maxNumbers[0] && max2 < matrix[i][j])
			{
				max2 = matrix[i][j];
			}
			
			if (i == 4 && j == 4) 
			{
				maxNumbers[1] = max2;
				matrix[1][1] = max2;
			}
		}
	}
	for (int i = 0, max3 = -60; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) 
		{
			if (matrix[i][j] != maxNumbers[0] && matrix[i][j] != maxNumbers[1] && max3 < matrix[i][j])
			{
				max3 = matrix[i][j];
			}
			
			if (j == 4 && i == 4) 
			{
				maxNumbers[2] = max3;
				matrix[2][2] = max3;
			}
		}
	}
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) 
		{
			cout << matrix[i][j] << " ";
			
			if (j == 4)
			{
				cout << endl;
			}
		}
	}

}