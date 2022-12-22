
/*Латинским квадратом порядка n называется
квадратная таблица размером nхn, 
каждая строка и каждый столбец 
которой со-держат все числа от 1 до n. 
Для заданного n в матрице L(n, n)
построить латинский квадрат порядка n.*/


#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int matrix[20][20];
	int n;
	
	cout << "n = "; cin >> n;
	
	for (int i = 0; i <= n; i++) 
	{
		
		for (int j = 0; j < n; j++) 
		{
			matrix[i][j] = rand() % (n - 1) + 1;
			
			cout << matrix[i][j] << " ";
			
			if (j + 1 == n)
				cout << endl;
		}
	}
}	





