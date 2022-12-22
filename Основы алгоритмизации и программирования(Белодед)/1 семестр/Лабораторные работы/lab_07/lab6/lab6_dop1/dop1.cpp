#include<iostream>
#include <stdio.h>
using namespace std;



void main()
{
	setlocale(LC_ALL, "Rus");
	int new_n = 10, num, num2, n1,n2,n3;
	
	bool active = false;
	while (pow(new_n,2)<1000)
	{
		num = pow(new_n, 2);
		num2 = num;
		int n1 = num / 100;
		int n2 = (num % 100) / 10;
		int n3 = (num % 100) % 10;
		
		if (n1<n2&&n2<n3)
		{
			active = true;
			break;
		}
		new_n++;
	}
	if (active)
	{
		cout << "Это число - " << num << endl;
	}




	
}