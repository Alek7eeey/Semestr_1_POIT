#include <iostream>
#include <stdlib.h> 
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int num;
	char arr[10];
	cout << "������� �����: "; 
	cin >> num;
	_itoa_s(num , arr, 2);
	cout << "����� � �������� ����: " << arr << endl;
	if (num % 4 == 0)
		cout << "����� ������ 4!" << endl;
	else
		cout << "����� �� ������ 4!" << endl;

	}