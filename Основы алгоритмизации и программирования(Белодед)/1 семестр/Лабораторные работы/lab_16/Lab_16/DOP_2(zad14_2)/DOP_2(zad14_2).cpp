
/*�������� ���������, ������������
���� �� �� ��������� � ���������� ������ ����� "����" */

#include<iostream>
#include<windows.h> /*��� ���������� ������� ��������� � ������� ���� char*/
#include<stdio.h>
using namespace std;


void search(char arr[70])
{
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == '�' && arr[i + 1] == '�' && arr[i + 2] == '�' && arr[i + 3] == '�')
		{
			cout << "� ������ ������������ ����� '����'!" << endl;
			break;
		}

		if (i + 1 == strlen(arr))
		{
			cout << "� ������ ��� ����� '����'!" << endl;
		}

	}
}


void main()
{
	
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	
	char arr[70] = "";
	
	cout << "������� ��������� ���� � ������, � ������� ����� �������������� �����  '����': " << "\t";
	gets_s(arr); /*���� ������ �� ������� enter*/

	search(arr); //�������

	cout << "\n";
}

