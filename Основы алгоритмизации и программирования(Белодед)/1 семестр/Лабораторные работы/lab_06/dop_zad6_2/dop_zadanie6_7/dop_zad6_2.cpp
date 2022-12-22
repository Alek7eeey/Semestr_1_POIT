#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double s, n, p, g, sum=0;
	cout << "Введите закупочную стоимость оборудования в первый год" << endl;
	cin >> s;
	cout << "На протяжении скольки лет вы закупаете оборудование? " << endl;
	cin >> n;
	cout << "Каков процент удишевления(в %)?" << endl;
	cin >> p;
	g = 1;
	
	while (g<=n)
	{
		sum = n*s-0.5*s;
	}
	
	cout << "Сумма накопленного оборудования за " << n << "лет, равна " << sum << endl;
}