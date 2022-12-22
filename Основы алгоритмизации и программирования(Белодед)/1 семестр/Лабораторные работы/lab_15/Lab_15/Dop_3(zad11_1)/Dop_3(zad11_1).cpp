//Задан массив A из n элементов.
//Проверить, есть ли в нём элементы, равные нулю.
//Если есть, найти наименьшее k,
//при котором A[k] = 0

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int size;

	cout << "Введите размерность массива: ";
	cin >> size;

	int* arr = new int[size];

	cout << "Массив: ";
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 12;
		cout << arr[i] << " ";
	}

	cout << endl<<endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]==0)
		{
			cout << "Есть элементы, равные нулю" << endl;
			goto active;
			break;
		}

	}
	
	cout << "Нет элемента, который равен нулю" << endl;
	
    active:
	
	int k = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			k = i + 1;
		}

	}
	
	cout << endl;
	if (k==0)
	{

	}
	else
	{
		cout << "k = " << k << endl;
	}
	
	cout<<endl;

	delete[] arr;
}