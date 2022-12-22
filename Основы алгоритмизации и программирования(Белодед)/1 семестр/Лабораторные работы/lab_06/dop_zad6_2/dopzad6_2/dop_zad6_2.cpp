#include<iostream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double s, n, p, g, sum = 0;
	
	cout << "Введите закупочную стоимость оборудования в первый год" << endl;
	cin >> s;
	
	cout << "На протяжении скольки лет вы закупаете оборудование? " << endl;
	cin >> n;
	
	cout << "Каков процент удишевления(в %)?" << endl;
	cin >> p;
	
	g = 0;

	while (g <= n)
	{
		sum = (n * s) - ((p/10) * s * n);
		g++;
	}

	cout << "Сумма накопленного оборудования за " << n << " лет(года), равна " << sum <<" тыс.руб" << endl;
}