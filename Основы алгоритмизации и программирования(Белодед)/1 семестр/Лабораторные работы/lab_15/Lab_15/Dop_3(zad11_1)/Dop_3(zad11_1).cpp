//����� ������ A �� n ���������.
//���������, ���� �� � �� ��������, ������ ����.
//���� ����, ����� ���������� k,
//��� ������� A[k] = 0

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

	cout << "������: ";
	
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
			cout << "���� ��������, ������ ����" << endl;
			goto active;
			break;
		}

	}
	
	cout << "��� ��������, ������� ����� ����" << endl;
	
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