#include <iostream>
#include <ctime>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int kol;
	cout << "Введите количество элементов массива" << endl;
	cin >> kol;
	int* arr = new int[kol];

	cout << "  " << endl; //пробел
	cout << "Массив из " << kol << " элементов:" << endl;

	for (int i = 0; i < kol; i++)
	{
		arr[i] = rand() % 99; //генератор/вывод случайных чисел, функция
		cout << arr[i] << " ";
	}

	int l = 0;
	for (int i = 0; i < kol - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			l++;
		}
	}
	cout << "  " << endl<<endl; //пробел
	cout << "Количество соседних элементов с одинаковыми значениями равно " << l << endl << endl;


}