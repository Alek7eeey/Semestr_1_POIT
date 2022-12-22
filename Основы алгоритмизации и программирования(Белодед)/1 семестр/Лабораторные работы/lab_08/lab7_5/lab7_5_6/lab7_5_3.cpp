#include<iostream>
#include<math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double summa = 0,z,d;
	const int size = 5;
	double arr[size]{ -2, 6, 1.1, 2.7, 4 };
	
for (int i = 0; i < size; i++)
	{
		arr[i];
		d = pow((arr[i] - 2), 2);
		summa = summa + d;
	}
	
	
	z = 8 * arr[2] + summa;
	cout << "z = " << z << endl;




}