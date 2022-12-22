
/*��� ������ A �� n ��������� � B �� m ���������. 
���������� �� ���������� ������� ������� A � ������� B? */

#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n, m;

	cout << "������� ���������� ��������� ������� �: ";
	cin >> n;

	cout << "������� ���������� ��������� ������� B: ";
	cin >> m;

	cout << endl;

	int* arrA = new int[n];
	int* arrB = new int[m];

	cout << "������ � �� " << n << " ���������" << endl;

	for (int i = 0; i < n; i++)
	{
		arrA[i] = rand() % 15;
		cout << arrA[i] << " ";
	}

	cout << endl;

	cout << endl;
	cout << "������ B �� " << m << " ���������: " << endl;

	for (int i = 0; i < m; i++)
	{
		arrB[i] = rand() % 15;
		cout << arrB[i] << " ";
	}

	cout << endl;

	int max_size = arrA[0];
	int num_max_size = 0;

	for (int i = 0; i < n; i++)
	{
		if (arrA[i] >= max_size)
		{
			max_size = arrA[i];
			num_max_size = i + 1;
		}

	}
	cout << endl;
	cout << "������������ ������� = " << max_size << ", ��������� ��� ������� " << num_max_size << endl;
	cout << endl;
	
	for (int i = 0; i < m; i++)
	{
		if (arrB[i]==max_size)
		{
			cout << "���������� ������� " << max_size << " ���������� � ������� B!" << endl;
			goto the_end;
		}

	}

	cout << "���������� ������� " << max_size << " �� ���������� � ������� B!" << endl;
	
    
    the_end:
	cout << endl;






	delete[] arrA; delete[] arrB;
}