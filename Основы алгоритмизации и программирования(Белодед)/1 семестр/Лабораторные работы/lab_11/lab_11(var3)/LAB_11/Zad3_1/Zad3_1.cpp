/*1.������ ����� ����� A. 
������������� ��� ���� � 2 �� 14, ������� ��� ����. ������� ���������.
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

	cout << "����� "<< a << " � �������� ����: " << arrA << endl;
	
	cout << "����� ����� ��������������: ";

	
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

