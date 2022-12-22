#include<iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	
	srand(time(NULL)); //c 1 января 1970 года, функция

	 int kol;
	 cout << "Введите количество элементов массива" << endl;
	 cin >> kol;
	 int* arr = new int[kol];
	
	 cout << "  " << endl; //пробел
	 cout << "Массив из " << kol <<" элементов:" << endl;
   
	 for (int i = 0; i < kol; i++)
	{
		arr[i] = rand() % 99; //генератор/вывод случайных чисел, функция
		cout << arr[i] << " ";
	}
	
	
	 int max = arr[0];
	for (int i = 0; i < kol; i++)
	{
		arr[i];
		
		if (arr[i]>=max)
		{
			max = arr[i];

		}
	}
	
	cout << "  " << endl<<endl; //пробел
	cout << "Замена нечетных по номеру элементов значением максимального массива" << endl;
	for (int i = 0; i < kol; i++)
	{
		arr[i];

		if ((i+1)%2!=0)
		{
			arr[i] = max;
		}

		cout << arr[i] << " ";
	}
	
	cout << "  " << endl<<endl; //пробел
	cout <<"Максимальный элемент массива равен = " << max << endl<<endl;


}