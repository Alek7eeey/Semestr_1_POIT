
/*Задан массив A из n чисел. 
Подсчитать, сколько раз встречается в нем максимальное число*/

#include<iostream>
using namespace std;



void search_max_num(int arr[], int size)
{
	int max_num = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= max_num)
		{
			max_num = arr[i];
		}
	}

	cout << endl<<endl;

	cout << "Максимальный элемент = " << max_num << endl<<endl;
	
	int kol = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == max_num)
		{
			kol++;
		}
	}

	cout << "Количество максимальных элементов = " << kol << endl<<endl;
}



void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	
	int size;
	
	cout << "Введите размерность массива: ";
	cin >> size;

	int* array = new int[size];
   
	
	cout << "\nМассив: " << endl;	
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 15-5;
		cout << array[i] << "\t";
	}

	search_max_num(array, size);

	delete[] array;
	
	
}