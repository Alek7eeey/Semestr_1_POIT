#include <iostream>
#include <ctime>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int kol;
	cout << "������� ���������� ��������� �������" << endl;
	cin >> kol;
	int* arr = new int[kol];

	cout << "  " << endl; //������
	cout << "������ �� " << kol << " ���������:" << endl;

	for (int i = 0; i < kol; i++)
	{
		arr[i] = rand() % 99; //���������/����� ��������� �����, �������
		cout << arr[i] << " ";
	}

	int l = 0;
	for (int i = 0; i < kol - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			l++;
		}
	}
	cout << "  " << endl<<endl; //������
	cout << "���������� �������� ��������� � ����������� ���������� ����� " << l << endl << endl;


}