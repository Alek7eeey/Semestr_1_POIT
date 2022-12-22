
/*���� ��� ������� A � �, ������ �� m ���������.
���������� ���������� ����� ����� k, ��� �������: 
A[k] > B[k] � A[k] < B[k], A[k] = B[k].
*/

#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	
	int sizeA, sizeB;
	cout << "������� ����������� ������� A: "; cin >> sizeA;
	cout << "������� ����������� ������� B: "; cin >> sizeB;
	
	int* arrA = new int[sizeA];
	int* arrB = new int[sizeB];


	cout << "\n������ A:" << endl;
	for (int i = 0; i < sizeA; i++)
	{
		*(arrA+i) = rand() % 15;
		cout << *(arrA+i) << " ";
	}

	cout << "\n\n������ B:" << endl;
	for (int i = 0; i < sizeB; i++)
	{
		*(arrB+i) = rand() % 15;
		cout << *(arrB + i) << " ";
	}

	
	int max_size;
	if (sizeA>sizeB)
	{
		max_size = sizeA;
	}

	else if (sizeA < sizeB)
	{
		max_size = sizeB;
	}

	else
	{
		max_size = sizeA;
	}

	
	int k = 0, f=0, m=0;
	for (int i = 0; i < max_size; i++)
	{
		if (*(arrA + i) > *(arrB + i))
		{
			k++;
		}

		if (*(arrA + i) < *(arrB + i))
		{
			f++;
		}

		if (*(arrA + i) == *(arrB + i))
		{
			m++;
		}
	}

	cout << "\n\n���������� ��������� ���� A[k] > B[k]: " << k << endl;
	cout << "���������� ��������� ���� A[k] < B[k]: " << f << endl;
	cout << "���������� ��������� ���� A[k] = B[k]: " << m << endl;


	delete[] arrA; 
	delete[] arrB;
	cout << endl<<endl;
}