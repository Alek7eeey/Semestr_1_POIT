/*���� ������ ��������, ��������� �� ����, ����, 
�������, �����, ������ �+� � ���. ����� ���������� ����. */

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char string[] = "12abcd12,1354+12av-jkol.";
	cout << "������ ��������: " << string << endl;
	int k = 0;

	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i]>='0' && string[i]<='9')
		{
			k++;
		}
	}

	cout <<"���������� ����: " << k << endl;
}