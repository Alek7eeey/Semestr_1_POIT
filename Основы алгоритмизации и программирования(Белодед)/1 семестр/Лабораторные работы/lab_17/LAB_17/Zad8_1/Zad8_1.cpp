
/*. � ������� ������������ ����� �������� ������������� �������� �� ����������. 
����� � ���������� ���-���� ������ ��������,
��� �������� ����� ���������, ������� �� ����,
�������� ���������� �� ����� ���-������, ������� ����� ����.*/

#include<iostream>
using namespace std;


int neg_num(int *parr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (*(parr+i) < 0)
		{
			*(parr + i) = pow(*(parr + i), 2);
		}
	}
}


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	
	int size;
	cout << "������� ����������� �������: "; cin >> size;

	int* arr = new int[size];
	
	cout << "������: " << endl;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20-10;
		cout << arr[i] << "\t";
	}

	
	cout << "\n������ ����� ���������� � �������: " << endl;
	
	neg_num(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}


	
	delete[] arr;
}



