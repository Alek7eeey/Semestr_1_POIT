#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int k;
	puts("�� ������ ���������� ����������?(1-��, 2-���)");
	cin >> k;
	switch (k)
	{
	case 1: {puts("�����?(1-������,2-������,3-����)");
		cin >> k;
		switch (k)
		{
		case 1: puts("�� ������� ������???"); break;
		case 2: puts("�������� �����!"); break;
		case 3: puts("������������ �����"); break;
		default: puts("������������ �������");
		}break;
	}
	case 2: puts("������� ������ ������"); break;
	default: puts("������������ �������"); break;
	}
	return 0;
}