/*���������, ���� �� � ������� ���� �� ���� ������, 
���������� ������������� �������, � ����� �� �����.
��� �������� ������� � ����� �� ������� ��������� �����.*/

#include <iostream>
#include<ctime>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	const int Row = 4;
	const int Col = 4;
	
	int arr[Row][Col]
	{   {2,5,7,9},
		{5,12,-5,3},
		{28,12,6,33},
		{7,13,15,19},
	
	};

	cout << "\t �������: " << endl<<endl;

	
	
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout << endl;
	}
	
	int num_row = 0;
	int num_col = 0;

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (arr[i][j]<0)
			{
				num_row=i+1;
				num_col = j + 1;
				break;
			}

		}
	}
	cout << endl;
	cout << "����� ������ � ������������� ��������� = " << num_row << endl;
	cout << "����� ������� � ������������� ��������� = " << num_col << endl;

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (j+1==num_col)
			{
				arr[i][j] = arr[i][j] / 2;
			}
		}
		
	}
	cout << endl;
	cout << "\t ����� �������: " << endl<<endl;

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}


	cout << endl;
}