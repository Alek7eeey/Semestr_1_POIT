/*�������� ���������, ������� ������� � ������ ��� ����� b � ������,
���������� ���������� �������.*/

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char string[] = "Belarus, Bulgaria, Belgium, Brazil, Butan";

	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i]=='b' || string[i]=='B')
		{
			string[i] = ' ';
		}
	}

	cout << string << endl;

}