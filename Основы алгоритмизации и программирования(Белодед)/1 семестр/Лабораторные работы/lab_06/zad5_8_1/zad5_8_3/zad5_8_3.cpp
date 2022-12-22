#include<iostream>
#include<stdio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	float w, s, t = -7.4, y, n = 9, j=0.1;
	do
	{
		cout << "¬ведите y:\n";
		cin >> y;
		w = 0.6 * j + exp(t * j) * pow(4 * y / n, 2);
		s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
		cout << "w = " << w <<"\n";
		cout << "s = " << s << "\n";
		j = j + 0.1;
	} 
	while (j < 0.4);




}