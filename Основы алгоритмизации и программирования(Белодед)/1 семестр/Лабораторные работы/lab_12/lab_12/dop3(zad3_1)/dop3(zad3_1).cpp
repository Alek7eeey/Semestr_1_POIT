
/*Заданы два массива А и В.
Подсчитать в них количество элементов, 
меньших значения t, и первым на печать вывести массив, имеющий наибольшее их количество.*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int t, kolA, kolB;

	cout << "Введите количество элементов массива A: ";
	cin >> kolA;

	cout << "Введите количество элементов массива B: ";
	cin >> kolB;

	cout << endl;
	
	int* arrA = new int[kolA];
	int* arrB = new int[kolB];

	cout << "Массив А: " << endl;

	for (int i = 0; i < kolA; i++)
	{
		arrA[i] = rand() % 15;
		cout << arrA[i] << " ";
	}

	cout << endl;
	cout << "Массив B: " << endl;

	for (int i = 0; i < kolB; i++)
	{
		arrB[i] = rand() % 15;
		cout << arrB[i] << " ";
	}
	
	cout << endl<<endl;
	cout << "Введите значение t: ";
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
			cout << "Массив A имеет больше элементов, которые меньше, чем " << t <<" !"<< endl;
			cout << endl;
			
			cout << "Массив А: " << endl;
			for (int i = 0; i < kolA; i++)
			{
				cout << arrA[i] << " ";
			}
			
			cout << endl<<endl;
			cout << "Массив B: " << endl;
			for (int i = 0; i < kolB; i++)
			{
				cout << arrB[i] << " ";
			}
		}

		else if (smallerA < smallerB)
		{
			cout << "Массив B имеет больше элементов, которые меньше, чем "<< t << " !" << endl;
			cout << endl;

			cout << "Массив B: " << endl;
			for (int i = 0; i < kolB; i++)
			{
				cout << arrB[i] << " ";
			}
			cout << endl<<endl;
			cout << "Массив А: " << endl;
			for (int i = 0; i < kolA; i++)
			{
				cout << arrA[i] << " ";
			}

		}

		cout << endl << endl;

		delete[] arrA; delete[] arrB;

}

