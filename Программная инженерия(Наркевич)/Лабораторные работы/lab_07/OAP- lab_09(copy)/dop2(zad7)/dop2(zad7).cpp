#include <iostream>
#include <ctime>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL)); //c 1 ������ 1970 ����, �������

	int number;
	
	cout << "������� ���������� ��������� �������" << endl;
	cin >> number;
	
	int* arr = new int[number]; //��������� ������ (arr - �����, ����������� �� ���������� number)
	                            /*new � ��������, �������������� ��������� ������������ ������ � ����.*/
    cout << endl;
	
	cout << "������ �� " << number << " ���������:" << endl;
	
	for (int i = 0; i < number; i++)
	{
		arr[i] = rand() % 99; //���������/����� ��������� �����, �������
		cout << arr[i] << " ";
	}

	int nElements = 0;
	
	for (int i = 0; i < number - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			nElements++;
		}
	}
	
	cout <<endl<<endl; 
	
	cout << "���������� �������� ��������� � ����������� ���������� ����� " << nElements << endl << endl;


}