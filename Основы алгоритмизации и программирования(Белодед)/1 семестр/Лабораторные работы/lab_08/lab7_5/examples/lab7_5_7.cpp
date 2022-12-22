#include <stdio.h>
#include <math.h>
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 6; 
	double d,c,k, sum = 0;
	
	const int sizeA = 6, sizeB = 6, sizeC=6;
	
	double massA[sizeA]{ 0.5, 2, 2.5, 1, 0, 8 };
	
	double massB[sizeB]{ 2.3, 4, 0.5, 2, 3, 9 };
	
	for (int i = 0, b=0; i < sizeA, b<sizeB; i++,b++)
	{
		massA[i];
		massB[b];
		
		c = sqrt(massA[i] + massB[b]);
		cout << "C" << i + 1 << "=" << c << endl;

		k = (c / (i + 1));
		sum = sum + k;
		
	}
	
	
	cout <<endl<< "d=" << sum << endl << endl;
}

