#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	float a, sum = 0; 
	int i;
	const int size = 4;
	for (i = 1; i <= size; i++)
	{
		cout << "������� a" << i << endl;
		cin >> a;
		sum = sum + a;
	}
	cout << "����� " << sum << endl;



}