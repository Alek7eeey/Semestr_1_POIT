
/*���������, ���� �� � ������� ���� �� ���� �������,
���������� ������������� �������, � ����� ��� �����.
��������� �������� ���������� ������� �����. */

#include <iostream>
using namespace std;



void function(int **arr, int row, int col)
{
	int num_col = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] < 0)
			{
				num_col = j;
				break;
			}
		}
	}

	cout << "\n����� �������, � ������� ���������� ������ ������������� ������� = " << num_col + 1 << endl;

	cout << "\n������� ����� ���������� " << num_col + 1 << " ������� � ��� ����: " << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (j == num_col)
			{
				arr[i][j] = arr[i][j] / 2;
			}
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}





void main()
{
	setlocale(LC_ALL, "Rus");

	int row, col;

	cout << "������� ���������� ����� � �������� ���������� (����� ������): " << endl;
	cin >> row >> col;

	int** arr = new int* [row];                  /*�������� �������*/

	for (int i = 0; i < row; i++)
		arr[i] = new int[col];



	cout << "\n" << "������� �������� �������(����� ������ �� " << col << " ��������� � ������): " << endl;

	for (int i = 0; i < row; i++)               /*���������� �������*/
	{
		for (int j = 0; j < col; j++)
		{
			cin >> arr[i][j];
		}

		cout << endl;
	}



	cout << "\n \t" << "�������:" << endl;
	for (int i = 0; i < row; i++)            /*����� �������*/
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}

		cout << endl;
	}

	function(arr, row, col);  //����� �������

	for (int i = 0; i < row; i++) /*�������� �������*/
	{
		delete[] arr[i];
	}

	delete[] arr;

	cout << endl;
}