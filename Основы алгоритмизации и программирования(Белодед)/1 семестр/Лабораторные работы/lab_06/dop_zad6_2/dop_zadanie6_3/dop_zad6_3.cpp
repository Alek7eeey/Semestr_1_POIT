#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	const int size = 5;
	int kol=0;
	double arr[size];
	arr[4] = 0;
	cout << "Введите последовательность ненулевых целых чисел"<<endl;
	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	cin >> arr[3];

	for (int i = 0; i < size; i++)
	{
		arr[i];
		
		if (arr[i]<0)
		{
			kol = kol + 1;
		}
	}
	
	if (arr[0]<0)
	{
		cout << "Знак менялся " << kol << " раз(a)" << endl;
	}
	
	else
	{
		kol = kol + 1;
		cout << "Знак менялся " << kol << " раз(a)" << endl;
	}
	
	


}