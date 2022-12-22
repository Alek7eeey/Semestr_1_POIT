/*1.Ввести целое число A. 
Инвертировать все биты с 2 по 14, включая эти биты. Вывести результат.
*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	
	int a;
	char arrA[16];

	cout << "a = "; cin >> a;

	_itoa_s(a, arrA, 2);

	cout << "Число "<< a << " в двоичном виде: " << arrA << endl;
	
	cout << "Число после инвертирования: ";

	
	for (int i = 0; i < strlen(arrA); i++)
	{
		if (i+1 >= 2 && i+1 <= 14)
		{
			if (arrA[i]=='0')
			{
				arrA[i] = '1';
			}

			else
			{
				arrA[i] = '0';
			}
		}

	}

	for (int i = 0; i < strlen(arrA); i++)
	{
		cout << arrA[i];
	}




	cout << endl;

}

