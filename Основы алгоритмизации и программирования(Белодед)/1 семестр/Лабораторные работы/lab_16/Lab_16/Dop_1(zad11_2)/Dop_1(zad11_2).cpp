
/*������������� ������: ����� ������ ����� c �������� ������ * */

#include<iostream>

using namespace std;



char str[70];

int strlen(char* arr) {//������� �������� ����� ������
	
	int count = 0, i = 0;
	
	while (arr[i] != NULL) {//���� ��������� ������� �� ����� NULL
		i++;
		count++;
	}
	return count;
}


void function(int POSITION, int LENGTH) {//������� ������� �������
	
	for (int i = LENGTH; i > POSITION; i--) {//���������� ��� �� ���� ������ ������
		str[i] = str[i - 1];
	}
	str[POSITION] = '*'; //��������� � �������������� ����� ������ *
}



void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "������� ������ � �������: ";
	
		
	cout << "������� ������ � ���������, � ������� ������������ ����� 'c' : ";
	
	cin >> str;
	
	int length = strlen(str);//���������� ����� ������
	
	for (int i = 0; i < length; i++)
	{
		
		while (str[i] != 'c' && i < length) //���� ������ c
			i++;
		
		if (i < length) 
		{
			i++;
			function(i, length);
			length++;
		}
	}
	
	cout << str << endl;


	cout << endl;
}





/*cin.get(arr, 80); ���� ��������� � ���� ������
	
char string_new[160];

for (int i = 0; i <= '\0'; i++)
{
	if (arr[i] == 'c' || arr[i] == 'C')
	{
		string_new[i] = arr[i];
		string_new[i + 1] = '*';
		i++;
	}

	else
	{
		string_new[i] = arr[i];
	}
}

for (int i = 0; i < strlen(string_new); i++)
{
	cout << string_new[i];
}



cout << endl; */