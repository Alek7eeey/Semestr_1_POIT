
/*� ���������� �������, ��������� �� k ����� ���������, 
��������� ���������� ������������� ���������
������� � ����� ��������� �������,
������������� ����� ���������� ��������,
������� ����.*/


#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int size;
	cout << "������� ����������� �������: ";
	cin >> size;
	int* arr = new int[size];

	cout << endl;
	cout << "������: " << endl;
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10-5;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	int k = 0;

	for (int i = 0; i < size; i++) /*���������� ������������� �����*/
	{
		if (arr[i]>0)
		{
			k++;
		}
	}

	int number = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i]==0)
		{
			number = i;
		}
	}

	if (number==0)
	{
		cout << endl;
		cout << "���������� ������������� ����� = " << k << endl << endl;
		cout << "����� ��������� ����� ���� = 0 " << endl << endl;
	}

	else
	{
		int sum = 0;

		for (number; number < size; number++) /*����� ��������� ����� ����*/
		{
			sum += arr[number];
		}

		cout << endl;
		cout << "���������� ������������� ����� = " << k << endl << endl;
		cout << "����� ��������� ����� ���� = " << sum << endl << endl;
	}
	
	delete[] arr;
}