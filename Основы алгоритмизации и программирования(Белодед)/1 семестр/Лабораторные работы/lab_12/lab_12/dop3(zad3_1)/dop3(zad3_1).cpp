
/*������ ��� ������� � � �.
���������� � ��� ���������� ���������, 
������� �������� t, � ������ �� ������ ������� ������, ������� ���������� �� ����������.*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int t, kolA, kolB;

	cout << "������� ���������� ��������� ������� A: ";
	cin >> kolA;

	cout << "������� ���������� ��������� ������� B: ";
	cin >> kolB;

	cout << endl;
	
	int* arrA = new int[kolA];
	int* arrB = new int[kolB];

	cout << "������ �: " << endl;

	for (int i = 0; i < kolA; i++)
	{
		arrA[i] = rand() % 15;
		cout << arrA[i] << " ";
	}

	cout << endl;
	cout << "������ B: " << endl;

	for (int i = 0; i < kolB; i++)
	{
		arrB[i] = rand() % 15;
		cout << arrB[i] << " ";
	}
	
	cout << endl<<endl;
	cout << "������� �������� t: ";
	cin >> t;
	cout << endl;

	int smallerA=0;
	
		for (int i = 0; i < kolA; i++)
	    {
			if (arrA[i]<t)
			{
				smallerA++;
			}
	    }


		int smallerB = 0;

		for (int i = 0; i < kolB; i++)
		{
			if (arrB[i] < t)
			{
				smallerB++;
			}
		}

		if (smallerA>smallerB)
		{
			cout << "������ A ����� ������ ���������, ������� ������, ��� " << t <<" !"<< endl;
			cout << endl;
			
			cout << "������ �: " << endl;
			for (int i = 0; i < kolA; i++)
			{
				cout << arrA[i] << " ";
			}
			
			cout << endl<<endl;
			cout << "������ B: " << endl;
			for (int i = 0; i < kolB; i++)
			{
				cout << arrB[i] << " ";
			}
		}

		else if (smallerA < smallerB)
		{
			cout << "������ B ����� ������ ���������, ������� ������, ��� "<< t << " !" << endl;
			cout << endl;

			cout << "������ B: " << endl;
			for (int i = 0; i < kolB; i++)
			{
				cout << arrB[i] << " ";
			}
			cout << endl<<endl;
			cout << "������ �: " << endl;
			for (int i = 0; i < kolA; i++)
			{
				cout << arrA[i] << " ";
			}

		}

		cout << endl << endl;

		delete[] arrA; delete[] arrB;

}

