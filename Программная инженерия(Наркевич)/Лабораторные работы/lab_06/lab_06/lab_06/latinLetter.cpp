#include "hello_h.h"
#include<iostream>
using namespace std;

void latinLetter()
{
	char symbal_A, symbal_B; int code_different, symbal_A1;
	cout << "������� � ���������� ��������� ����� ���������� ��������" << endl;
	cin >> symbal_A;
	cout << "������� � ���������� �������� ����� ���������� ��������" << endl;
	cin >> symbal_B;

	
	code_different = abs(symbal_B - symbal_A);
	
	cout << "������� �������� ����� ���� ���������� �������� � ��������� � �������� ��������� ����� = " << code_different << endl << endl;


	
}






