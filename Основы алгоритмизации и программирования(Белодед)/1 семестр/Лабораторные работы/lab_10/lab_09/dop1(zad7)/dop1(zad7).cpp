#include<iostream>
#include<ctime>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL)); //c 1 ������ 1970 ����, �������

	int kol, week; 
	cout << "������� ���� ������� ��������� �������� ������� (������� - 8 ����)" << endl;
	cin >> kol;
	
	if (kol >= 8 && kol <= 70)
	{
		int* arr = new int[kol];

		cout << "���������� ��������� �� ���� ( " << kol << " )" << endl;

		for (int i = 0; i < kol; i++)
		{
			arr[i] = rand() % 20; //���������/����� ��������� �����, �������
			cout << "���� " << i + 1 << " - " << arr[i] << " mm" << endl;
		}

		int max = arr[0], NMax = 0;

		for (int i = 0; i < kol; i++)
		{


			if (arr[i] > max)
			{
				max = arr[i];
				NMax = i + 1;
		
			}
		}

		week = NMax / 7;

		if (week % 7 != 0 || week==0)
		{
			week++;
			cout << "  " << endl; //������
			cout << "������������ ���������� ������� ������ �� "<< week << " ������ (� " << NMax << " ���� ���������), ���������� ������� ��������� " << max << " mm " << endl << endl;
		}

	
		else
		{
			cout << "  " << endl; //������
			cout << "������������ ���������� ������� ������ �� "<< week <<" ������ (� " << NMax << " ���� ���������), ���������� ������� ��������� " << max << " mm " << endl << endl;
		}

		

	}
	
	else
	{
		cout << "������� ���������� �������!" << endl << endl;
	}


}