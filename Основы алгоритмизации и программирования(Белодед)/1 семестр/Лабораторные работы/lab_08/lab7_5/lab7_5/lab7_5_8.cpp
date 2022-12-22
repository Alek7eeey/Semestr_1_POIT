#include<iostream>
#include<math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	const int sizeA = 6, sizeB = 5;  //длина массива//
	double arr1[sizeA]{ 3,12,-4,6.2,3,0.4 };
	double arr2[sizeB]{ 19,1,-24,4.2,8 };
    
	double c = 0.7, d; 
	int sum1 = 0, sum2 = 0, k;

	for (int i = 0; i < sizeA; i++)
	{
		arr1[i];
		sum1 = sum1 + arr1[i];
	}
	
	for (int i = 0; i < sizeB; i++)
	{
		arr2[i];
		k = pow((arr2[i] - 1), 2);
		sum2 = sum2 + k;
	}
	
	d = sum1 - c * sum2;
	
	cout <<" d = " << d << endl<<endl;

		
	

}

