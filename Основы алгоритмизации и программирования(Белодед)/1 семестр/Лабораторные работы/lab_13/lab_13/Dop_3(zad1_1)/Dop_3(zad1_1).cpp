/*�������� ���������, ����������� ������� � ������ n ��������,
������� � ������� k. */

#include<iostream>
#include<string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char string[] = "Hello, how are you?";
	char symbol;
	int k,n;
	
	cout << "������: " << string << endl;

	cout << "������� ���������� �������� ��� ����������: " << " ";
	cin >> n;

	cout << "������� �������: " << " ";
	cin >> k;

	cout << "������� ������ ��� ����������: " << " ";
	cin >> symbol;

	cout << "����� ������: " << " ";

	for (int i = 0; i < strlen(string); i++)
	{
		if ( (i + 1) >= k && ( i + 1 ) < k+n ) 
		{
			string[i] = symbol;
		}
		cout << string[i];
	}

	

	cout << endl;
	
	
	


}