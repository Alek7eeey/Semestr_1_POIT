
/*Разделить массив на две части, поместив в первую элементы, 
большие среднего арифметического их суммы, а во вторую меньшие.*/

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int sr_arifm, kol, sum=0;

	cout << "Введите количество элементов массива: ";
	cin >> kol;
	cout << endl;

	cout << "Массив из " << kol << " элементов: " << endl;
	int* arr = new int[kol];
	for (int i = 0; i < kol; i++)
	{
		arr[i] = rand() % 15;
		cout << arr[i] << " ";
		sum += arr[i];
	}

	cout << endl;

	sr_arifm = sum / kol;
	cout << endl;
	cout << "Среднее арифмитичесикое чисел = " << sr_arifm << endl << endl;
	
	int smaller[150], bigger[150], j=0, l=0;

	for (int i = 0; i < kol; i++)
	{
		if (arr[i] < sr_arifm)
		{
			smaller[j] = arr[i];
			j++;
		}

		else if (arr[i] > sr_arifm)
		{
			bigger[l] = arr[i];
			l++;
		}

	}

	cout << "Элементы, большие среднего арифмитического их суммы : ";

	for ( int i = 0; i <l; i++)
	{
		cout << bigger[i] << " ";
	}

	cout << endl;
	cout << "---------------------------------------------------------------------------" << endl;

	cout << "Элементы, меньшие среднего арифмитического их суммы : ";

	for (int i = 0; i < j; i++)
	{
		cout << smaller[i] << " ";
	}
	cout << endl; cout << endl;
	
	
	delete[] arr;


}