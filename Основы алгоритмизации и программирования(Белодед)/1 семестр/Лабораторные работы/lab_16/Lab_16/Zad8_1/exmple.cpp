
//��� ��������� ������, ��������� �� N ����� � � ��������.
//����� ���������� �������������,
//������������� � ������� ��������� �������.

#include<iostream>
using namespace std;


void min_size(int **arr, int row, int col)
{
	int k = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] < 0)
			{
				k++;
			}
		}
	}
	if (k == 0)
	{
		cout << "������������� ����� ���!" << endl;
	}
	else
	{
		cout << k << endl;
	}
}

int max_size(int** arr, int row, int col)
{
	int t = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] > 0)
			{
				t++;
			}
		}
	}
	if (t == 0)
	{
		cout << "������������� ����� ���!" << endl;
	}
	else
	{
		cout << t << endl;
	}
}

int size_null(int** arr, int row, int col)
{
	int f = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == 0)
			{
				f++;
			}
		}
	}
	if (f == 0)
	{
		cout << "�����, ������� ����� 0 �����������!" << endl;
	}
	else
	{
		cout << f << endl;
	}
}




void main()
{
	setlocale(LC_ALL, "Rus");
	int row,col;
	
	cout << "������� ���������� ����� � �������� ���������� (����� ������): " << endl;
	cin >> row >> col;

	int** arr = new int* [row];                  /*�������� �������*/
	
	for (int i = 0; i < row; i++)
		arr[i]=new int [col];
	
	
	
	cout << "\n" << "������� �������� �������(����� ������ �� "<<col<<" ��������� � ������): " << endl;
	
	for (int i = 0; i < row; i++)               /*���������� �������*/
	{
		for (int j = 0; j < col; j++)
		{
		   cin>>arr[i][j];
		}

		cout << endl;
	}
	
	
	
	cout << "\n \t" << "������:" << endl;

	for (int i = 0; i < row; i++)            /*����� �������*/
	{
		for (int j = 0; j < col; j++)
		{
			cout<<arr[i][j]<<"\t";
		}

		cout << endl;
	}
	
	cout << endl;
	
	
	
	int choice;

active:

	cout << "�������� �������:\n 1)����� ���������� ������������� ����� \n 2)����� ���������� ������������� ����� \n 3)����� ���������� �����, ������� ����� ����" << endl;

	cin >> choice;
	cout << "�����: ";

	switch (choice)
	{
	case 1:
	{
		min_size(arr, row, col);

		int in_case1;
		cout << "������� ������� ��� ���� �������(1-��/2-���)?" << endl;
		cin >> in_case1;

		switch (in_case1)
		{
		case 1:
		{
			goto active;
		}

		case 2:
		{
			break;
		}


		default:
		{
			break;
		}

		}

	}

	case 2:
	{
		max_size(arr, row, col);

		int in_case1;
		cout << "������� ������� ��� ���� �������(1-��/2-���)?" << endl;
		cin >> in_case1;

		switch (in_case1)
		{
		case 1:
		{
			goto active;
		}

		case 2:
		{
			break;
		}


		default:
		{
			break;
		}

		}


	}

	case 3:
	{
		size_null(arr, row, col);

		int in_case1;
		cout << "������� ������� ��� ���� �������(1-��/2-���)?" << endl;
		cin >> in_case1;

		switch (in_case1)
		{
		case 1:
		{
			goto active;
		}

		case 2:
		{
			break;
		}


		default:
		{
			break;
		}

		}

		break;
	}

	default:
	{
		cout << "Error!" << endl;
		goto active;
	}


	}



	cout << endl << endl;
	
	 
	
	for (int i = 0; i < row; i++) /*�������� �������*/
	{
		delete[] arr[i];
	}
	
	delete[] arr;
	
	cout << endl;
	
}