
/*��������� ��������� ������� n ����������
���������� ������� �������� n�n, 
������ ������ � ������ ������� 
������� ��-������ ��� ����� �� 1 �� n. 
��� ��������� n � ������� L(n, n)
��������� ��������� ������� ������� n.*/


#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int matrix[20][20];
	int n;
	
	cout << "n = "; cin >> n;
	
	for (int i = 0; i <= n; i++) 
	{
		
		for (int j = 0; j < n; j++) 
		{
			matrix[i][j] = rand() % (n - 1) + 1;
			
			cout << matrix[i][j] << " ";
			
			if (j + 1 == n)
				cout << endl;
		}
	}
}	





