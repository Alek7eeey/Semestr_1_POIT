/*Дан массив X, содержащий k элементов, и массив Y, 
n элементов.Найти их «пересечение», 
т.е.массив Z, содержащий их общие элементы.*/

#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL)); //c 1 января 1970 года, функция

	int k, n, j=0;
	
	cout << "Введите количество элементов массива X: " << endl;
	cin >> k;
	int* arrX = new int[k];

	cout << "Введите количество элементов массива Y: " << endl;
	cin >> n;
	int* arrY = new int[n];

	cout << "Массив Х из " << k << " элементов: " << endl;
	for (int i = 0; i < k; i++)
	{
		arrX[i] = rand() % 10; //генератор/вывод случайных чисел, функция
		cout << arrX[i] << " ";
	}

	cout << endl;
	cout << "---------------------------------------------------------------------------" << endl;

	cout << "Массив Y из " << n << " элементов: " << endl;
	for (int i = 0; i < n; i++)
	{
		arrY[i] = rand() % 10; //генератор/вывод случайных чисел, функция
		cout << arrY[i] << " ";
	}
	cout << endl;
	cout << "---------------------------------------------------------------------------" << endl;
	
	
	int f = k + n;

	int* mas = new int[f];

	for (int i = 0; i < k; i++)

	{

		for (int t = 0; t < n; t++)

		{

			if (arrX[i] == arrY[t])

			{

				mas[j] = arrX[i]; j++;

			}

		}

	}

	cout << "Новый массив: ";
	

	cout << endl;

	
	for (int i = 0; i < j; ++i) 
	{

		for (int s = 0; s < j; ++s) {

			if (mas[s] == mas[i] && s != i) 
			{

				for (int r = s; r < j; r++) 
				{

					mas[r] = mas[r + 1];

				}
				j--;

			}

		}

	}

	for (int i = 1; i < j; i++)
	{

		cout << mas[i]<<" ";

	}

	cout << endl;
	cout << endl;


	delete[] arrY, delete[] arrX;
}
	





