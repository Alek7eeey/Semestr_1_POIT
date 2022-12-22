#include<iostream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 6; double sum=0,k;
	const int sizeX = 6, sizeY = 6;
	double arrX[sizeX]{ 3,-2,0.7,-1,-2,7 };
	double arrY[sizeY]{ 1,5,-1.2,6,9,-4 };

	for (int x = 0, y=0; x < sizeX, y<sizeY ; x++, y++)
	{
		arrX[x];
		arrY[y];
		k = arrX[x] * arrY[y];
		sum = sum + k;
	}

	cout << "q = " << sum << endl;


}