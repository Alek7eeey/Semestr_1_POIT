
/*�������� ���������, ������� ������ ��������� ���� ������
� ���������� ����� ���������� ����.
����� ��������� ���������.*/

#include<iostream>
using namespace std;


void function(char string)
{

	int f = 0;

	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == ' ' && string[i] != '\0')
		{
			f++;
		}
	}
	
	cout << "�� ����� " << f + 1 << " ����(�)" << endl;
}



void main()
{
	setlocale(LC_ALL, "Rus");

	cout << "������� ��������� ���� ����� �������: " << endl;
	
	char arr[100];
	
	cin.get(arr,80); /*���� ��������� � ���� ������*/
	
	function(*arr); /*�������*/

}