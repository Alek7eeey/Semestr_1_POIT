/*�������� ���������, ������� ������������ ��������� ���� �����
� ������� ��������� � ���, ����� ������� ���������.*/

#include <cstring>
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char stroka1[] = "Hello, Aleksey", stroka2[] = "Hello, Dmitry";
	
	cout <<"������ �1: " << stroka1 << endl;
	cout <<"������ �2: "<< stroka2 << endl;

	char new_arr[50];
	int k = 0;

	for (int i = 0; i < strlen(stroka1); i++)
	{
		if (stroka1[i]==stroka2[i])
			{
				new_arr[k] = stroka1[i];
				k++;
			}
	
	}

	new_arr[k] = '\0'; //����������
	cout <<"��������� ��������� �������: " << new_arr << endl;
	
}


