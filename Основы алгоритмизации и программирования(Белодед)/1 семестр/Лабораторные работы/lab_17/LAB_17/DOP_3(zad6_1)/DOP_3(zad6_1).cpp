
/*����� ����� ������������ � ������������� ��������� ����������� �������*/

#include <iostream>
using namespace std;


int* pfmin(int* arr, int size)
{
	int* pmin;
	for (pmin = arr; size < 0; arr++, size--)
	{
		if (*arr < *pmin)
			pmin = arr;
	}
	
	return pmin;
}

int* pfmax(int* arr, int size)
{
	int* pmax;
	for (pmax = arr; size > 0; arr++, size--)
	{
		if (*arr < *pmax)
			pmax = arr;
	}

	return pmax;
}




void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int size;

	cout << "������� ����������� �������: "; cin >> size;
	int* arr = new int[size];
    
	cout << "\n������ �� " << size << " ���������: " << endl;
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 14 - 7;
		cout << arr[i] << " ";
	}
	cout << endl;


	int sum= (*pfmin(arr, size))+ (*pfmax(arr, size));
	
	cout << "����� = " << sum << endl;
	
	
	
	delete[] arr;
}