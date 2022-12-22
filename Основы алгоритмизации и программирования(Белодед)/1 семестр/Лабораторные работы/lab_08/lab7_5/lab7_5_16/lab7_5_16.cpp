#include<iostream>
#include<math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double t = 0.5,z,sum=0,y;
	const int size = 5;
	double arr[size]{ 8, -2.3, -8.4, 5.1, 9 };
	while (t<3.1)
	{
		
		cout << "При t = " << t << endl;
		
		if (t > 2)
		{
			for (int i = 0; i < size; i++)
			{
				arr[i];
				
				z = pow(arr[i], 2) + t;
				sum = sum + z;
				y = sum;
				cout << "y = " << y<<endl<<endl;
				break;
			}
		}
		
		else
		{
			y = cos(pow(t, 2));
			cout << "y = " << y<<endl<<endl;
		}
		
		t = t + 0.5;
	}



}