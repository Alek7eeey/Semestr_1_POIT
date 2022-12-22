
//��� ��������� ������, ��������� �� N ����� � � ��������.
//����� ���������� �������������,
//������������� � ������� ��������� �������.

#include<iostream>
using namespace std;

void num_min_size(int arr[3][3], int row, int col )
{
	int k=0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j]<0)
			{
				k++;
			}
		}
	}
	if (k==0)
	{
		cout << "������������� ����� ���!" << endl;
	}
	else
	{
		cout << k << endl;
	}
		
}



void num_max_size(int arr[3][3], int row, int col)
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

  void num_size_NULL(int arr[3][3], int row, int col)
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
    
	const int rowN = 3;
	const int colM = 3;
	
	int matrix[rowN][colM];


	cout << "������� �������� ������� 3x3 (����� ������ �� " << colM << " ��������� � ������): " << endl;

	for ( int i = 0; i < rowN; i++)
	{
		for (int j = 0; j < colM; j++)
		{
			cin >> matrix[i][j];
		}
		
		cout << endl;
	}

	cout << "M������ 3�3: " << endl;

	for (int i = 0; i < rowN; i++)
	{
		for (int j = 0; j < colM; j++)
		{
			cout << matrix[i][j] << "\t";
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
		num_min_size(matrix, 3, 3);

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
		num_max_size(matrix, 3, 3);
		
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
		num_size_NULL(matrix, 3, 3);

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
}