
/*. � ������� ������������ ����� �������� ������������� �������� �� ����������.
����� � ���������� ���-���� ������ ��������,
��� �������� ����� ���������, ������� �� ����,
�������� ���������� �� ����� ���-������, ������� ����� ����.*/

#include<iostream>
using namespace std;


int& neg_num(int arr[], int size); //�������� �������


int& function2(int arr[], int size);  //�������� �������



void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int size, razn = 100, num = 0;;
	cout << "������� ����������� �������: "; cin >> size;

	int* arr = new int[size];

	cout << "\n������: " << endl;
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << "\t";
	}


	cout << "\n\n������ ����� ���������� � �������: " << endl;

	neg_num(arr, size);
	
	function2(arr, size);
	cout << "\n\n������ �������� = " << num + 1 << " , ������� = " << razn << endl;
	
	cout << endl;

	delete[] arr;
}


int& neg_num(int arr[], int size)           //������������ 1
{
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < 0)
		{
			*(arr + i) = pow(*(arr + i), 2);
		}
		cout << arr[i] << "\t";
	}

}

int& function2(int arr[], int size)             //������������ 2
{
	int razn = 100, num = 0;

	for (int i = 1; i < size; i++)
	{
		int sum_before = 0, sum_after = 0;
		for (int j = 0; j < i; j++)
		{
			sum_before += arr[j];
		}

		for (int j = i + 1; j < size; j++)
		{
			sum_after += arr[j];
		}

		if (abs(sum_after - sum_before) <= razn)
		{
			razn = abs(sum_after - sum_before);
			num = i;
		}
	}

	return num, razn;


}