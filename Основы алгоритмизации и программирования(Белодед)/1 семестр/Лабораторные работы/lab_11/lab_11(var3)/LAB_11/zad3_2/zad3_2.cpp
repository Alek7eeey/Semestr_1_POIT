
/*2.������������� n ����� � ����� � ����� �� ������� p,
�������� ��� n ����� ����� �, ������� � ����-��� q */

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int A, B;
	char arrA[16], arrB[16], arrA_new[16], arrB_new[16];

	cout << "������ ����� � = "; cin >> A;
	cout << "������ ����� � = "; cin >> B;

	_itoa_s(A, arrA, 2);
	cout << "A ( � 2-�� ������� ��������� ) = " << arrA << endl;

	_itoa_s(B, arrB, 2);
	cout << "B ( � 2-�� ������� ��������� ) = " << arrB << endl;

	int n, p;
	cout << "������� ���������� ����� (n): "; cin >> n;
	cout << "������� ������� (p): "; cin >> p;

	
	int num = p - n;
	for (num; num < p ; num++)
	{
		int j = 0;
		if (arrA[num]=='0')
		{
			
			arrA_new[j] = '1';
			j++;
		}
		
		else
		{
			arrA_new[j] = '0';
			j++;
		}
		
	}

	int q;
	cout << "������� ������� (q): "; cin >> q;

	for (int i = 0; i < strlen(arrB); i++)
	{
		if (i>=q && i<=q+n)
		{
			int j = 0;
			arrB[i] = arrA_new[j];
			j++;
			
			cout << arrB[i] << " ";
		}

		else
		{
			cout << arrB[i] << " ";
		}
	}



	cout << endl;
}