
/*���� ��� ������������� ������� A(n, m) � B(n, m). 
���������� ���������� ��� ��� (a[i][j] ,b[i][j] ), 
��� �������:
�) a[i][j]<b[i][j]; 
�) a[i][j] = b[i][j]; 
�) a[i][j] > b[i][j] 
*/

#include <iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	const int ROW = 3;
	const int COL = 4;

	int arrA[ROW][COL], arrB[ROW][COL];


	cout << "\t ������� �: " << endl << endl;
	
	for (int i = 0; i < ROW; i++) /*���������� ������� �*/
	{
		for (int j = 0; j < COL; j++)
		{
			arrA[i][j] = rand() % 15;
			
		}
	}

	for (int i = 0; i < ROW; i++) /*����� ������� �*/
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arrA[i][j]<<"\t";
		}
		cout << endl;
	}

	cout << endl<<endl;
	cout << "\t ������� B: " << endl<<endl;

	for (int i = 0; i < ROW; i++) /*���������� ������� �*/
	{
		for (int j = 0; j < COL; j++)
		{
			arrB[i][j] = rand() % 15;

		}
	}

	for (int i = 0; i < ROW; i++)  /*����� ������� �*/
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arrB[i][j] << "\t";
		}
		cout << endl;
	}

	int a = 0; 
	for (int i = 0; i < ROW; i++) /* a[i][j] < b[i][j] */
	{
		for (int j = 0; j < COL; j++)
		{
			if (arrA[i][j] < arrB[i][j])
			{
				a++;
			}

		}
	}

	int b = 0;
	for (int i = 0; i < ROW; i++)  /* a[i][j] == b[i][j] */
	{
		for (int j = 0; j < COL; j++)
		{
			if (arrA[i][j] == arrB[i][j])
			{
				b++;
			}

		}
	}

	int c = 0;
	for (int i = 0; i < ROW; i++)  /* a[i][j] > b[i][j] */
	{
		for (int j = 0; j < COL; j++)
		{
			if (arrA[i][j] > arrB[i][j])
			{
				c++;
			}

		}
	}
	cout << endl;
	cout << "�) " << a << endl << "�) " << b << endl << "c) " << c << endl;






	cout << endl;
}