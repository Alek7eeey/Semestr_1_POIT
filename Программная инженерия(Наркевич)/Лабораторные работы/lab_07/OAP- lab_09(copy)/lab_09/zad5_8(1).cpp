#include<iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	
	srand(time(NULL)); //c 1 ������ 1970 ����, �������

	 int kol;
	 cout << "������� ���������� ��������� �������" << endl;
	 cin >> kol;
	 int* arr = new int[kol];
	
	 cout << "  " << endl; //������
	 cout << "������ �� " << kol <<" ���������:" << endl;
   
	 for (int i = 0; i < kol; i++)
	{
		arr[i] = rand() % 99; //���������/����� ��������� �����, �������
		cout << arr[i] << " ";
	}
	
	
	 int max = arr[0];
	for (int i = 0; i < kol; i++)
	{
		arr[i];
		
		if (arr[i]>=max)
		{
			max = arr[i];

		}
	}
	
	cout << "  " << endl<<endl; //������
	cout << "������ �������� �� ������ ��������� ��������� ������������� �������" << endl;
	for (int i = 0; i < kol; i++)
	{
		arr[i];

		if ((i+1)%2!=0)
		{
			arr[i] = max;
		}

		cout << arr[i] << " ";
	}
	
	cout << "  " << endl<<endl; //������
	cout <<"������������ ������� ������� ����� = " << max << endl<<endl;


}