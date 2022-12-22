
/*Дан массив x, содержащий k элементов, массив y, содержащий n элементов, 
и число q. Найти сумму вида x[i] + y[j], наиболее близкую к числу q.*/

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int k, n, q;
	
	cout << "Введите количество элементов массива X: ";
	cin >> k;
	int* arrX = new int[k];   

	
	cout << "Введите количество элементов массива Y: ";
	cin >> n;
	int* arrY = new int[n];

	
	cout << endl;

	
	cout << "Массив X из " << k << " элментов: " << endl;
	for (int i = 0; i < k; i++)
	{
		arrX[i] = rand() % 15;
		cout << arrX[i] << " ";

	}
	cout << endl;
	
	
	cout << "---------------------------------------------------------------------------" << endl;

	
	cout << "Массив Y из " << n << " элментов: " << endl;
	for (int i = 0; i < n; i++)
	{
		arrY[i] = rand() % 15; //генератор/вывод случайных чисел, функция
		cout << arrY[i] << " ";
	}
	cout << endl;
	cout << "---------------------------------------------------------------------------" << endl;

	cout << "Введите значение q: ";
	cin >> q;

	
	int min_sum = abs(q - (arrX[0] + arrY[0]));

	for (int i = 0; i <k; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (abs(q - (arrX[i] + arrY[j]))<=min_sum)
			{
				min_sum = abs(q - (arrX[i] + arrY[j]));
			}

			else if (abs(q - (arrX[i] + arrY[j])) == q)
			{
				min_sum = q;
				break;
			}
			
		}
		
		
	}
	
	
	for (int i = 0; i < (n+k); i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (abs(q - (arrX[i] + arrY[j])) == min_sum)
			{
				min_sum = arrX[i] + arrY[j];
			}


		}


	}
	

	cout << "Сумма, наиболее близкая к числу q = " << min_sum << endl << endl;
	

	delete[] arrY, delete[] arrX;
}