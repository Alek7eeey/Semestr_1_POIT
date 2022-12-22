
/*��� ������ x, ���������� k ���������, ������ y, ���������� n ���������, 
� ����� q. ����� ����� ���� x[i] + y[j], �������� ������� � ����� q.*/

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int k, n, q;
	
	cout << "������� ���������� ��������� ������� X: ";
	cin >> k;
	int* arrX = new int[k];   

	
	cout << "������� ���������� ��������� ������� Y: ";
	cin >> n;
	int* arrY = new int[n];

	
	cout << endl;

	
	cout << "������ X �� " << k << " ��������: " << endl;
	for (int i = 0; i < k; i++)
	{
		arrX[i] = rand() % 15;
		cout << arrX[i] << " ";

	}
	cout << endl;
	
	
	cout << "---------------------------------------------------------------------------" << endl;

	
	cout << "������ Y �� " << n << " ��������: " << endl;
	for (int i = 0; i < n; i++)
	{
		arrY[i] = rand() % 15; //���������/����� ��������� �����, �������
		cout << arrY[i] << " ";
	}
	cout << endl;
	cout << "---------------------------------------------------------------------------" << endl;

	cout << "������� �������� q: ";
	cin >> q;

	
	int min_sum = abs(q - (arrX[0] + arrY[0]));

	for (int i = 0; i <k; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (abs(q - (arrX[i] + arrY[j]))<=min_sum)
			{
				min_sum = abs(q - (arrX[i] + arrY[j]));
			}

			else if (abs(q - (arrX[i] + arrY[j])) == q)
			{
				min_sum = q;
				break;
			}
			
		}
		
		
	}
	
	
	for (int i = 0; i < (n+k); i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (abs(q - (arrX[i] + arrY[j])) == min_sum)
			{
				min_sum = arrX[i] + arrY[j];
			}


		}


	}
	

	cout << "�����, �������� ������� � ����� q = " << min_sum << endl << endl;
	

	delete[] arrY, delete[] arrX;
}