#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int number, n1,n2,n3,n4;
	cout << "������� ����������� �������������� �����:";
	cin >> number;
	n1 = number / 1000;
	n2 = (number - (n1 * 1000)) / 100;
	n3 = (number - (n1 * 1000) - (n2 * 100)) / 10;
	n4 = (number % 10);
	if(number>9999)
	{
		cout << "�� ����� �������� �����! ���������� ������ ������������� �����!" << endl;
	}
	else {
		if(n1!=n2 && n2!=n3 && n3!=n4 && n1!=n3 && n1!=n4 && n2!=n4)
			{
				cout << "��,�����, ��� ����� ������� ����� ��������!" << endl;
			}
			else
			{
				cout << "�� �����, �� ��� ����� ������� ����� ��������" << endl;
			}
	}

	

}