#include<iostream>
#include<math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	const int size = 5;
	double arr[size]{ 1,2.7,4.7,6,10 };
	double max,y,sum=0,x;
	
	for (int i = 0; i < size; i++)
	{
		arr[i];
		max = arr[0];
		
		if (arr[i] > max) 
		{
			max = arr[i];
		}
	}   
	     cout << "z = " << max << endl;

		 for (int i = 0; i < size; i++)
		 {
			 arr[i];
			 x = pow(arr[i], 2);
			 sum = sum + x;
		 }

		 y = max * sum;
		 cout << "y = " << y << endl;
		 
}