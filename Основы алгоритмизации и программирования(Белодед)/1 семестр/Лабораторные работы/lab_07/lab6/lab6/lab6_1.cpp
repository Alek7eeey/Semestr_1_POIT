#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double b = 3, c = 6 * pow(10, -4), a = 6, i = 8, t, x;
	
while (i<24.1)
	{
		t = a * i / (pow(a, 2) - b) * exp(-a);

		if (t>5)
		{
			x = 4.8 * pow(10, -3) + i * a;
		}
		
		else
		{
			x = a + pow(i, 2) * t;
		}

		cout << "При i = " << i << endl;
		cout << "t = " << t << " x = " << x << endl<<endl;

		i =i+ 4;
	}




}