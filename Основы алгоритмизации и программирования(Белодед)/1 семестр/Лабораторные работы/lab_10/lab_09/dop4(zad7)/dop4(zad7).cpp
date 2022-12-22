#include <iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int kol, k=0;
	cout << "Введите количество элементов массива" << endl;
	cin >> kol;
	int* arr = new int[kol];
	
	cout << "  " << endl; //пробел
	cout << "Введите элементы массива из " << kol << " элементов:" << endl;

	for (int i = 0; i < kol; i++)
	{
		arr[i];
		cin >> arr[i];
		
	}
	
	for (int i = 0; i < kol; i++)
	{
		if (arr[i] != arr[i+1])
		{
			k++;
		}
		
	}
	cout << endl;
	
	if (k == kol)
	{
		cout << "Все элементы различны!" << endl << endl;
	}

		if (k == 1)
		{
			cout << "Все элементы одинаковы" << endl;
		}
		
		if(k!=kol && k!=1)
		{
			cout << k << " различных элемента(ов)" << endl << endl;
		}
	
	
	


}