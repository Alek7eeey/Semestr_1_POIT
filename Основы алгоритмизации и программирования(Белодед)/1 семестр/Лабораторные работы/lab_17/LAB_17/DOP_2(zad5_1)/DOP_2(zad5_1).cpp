
/*В одномерном массиве, содержащем 15 элементов,
посчитать и вывести сумму всех четных элементов массива*/

#include<iostream>
using namespace std;


int& function(int arr[], int size, int sum);



void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	cout << "Одномерный массив, сосятощий из 15 элементов: " << endl;

	int const size = 15;
	int sum = 0;
	int* arr = new int[size];

	for (int i = 0; i < 15; i++)
	{
		arr[i] = rand() % 20 -5;
		cout << arr[i] << " ";
	}
	int SUM = function(arr, size, sum);

	cout << "\n\nСумма нечётных элементов массива = " << SUM;

	cout << endl << endl;
	delete[] arr;

}

int& function(int arr[], int size, int sum)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			sum += arr[i];
		}
	}

	return sum;
}