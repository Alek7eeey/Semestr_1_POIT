#include<iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double p, Q, days;
	cout << "Введите выручку товара в первый рабочий день P(тыс.руб.):" << endl;
	cin >> p;
	cout << "Введите конечное значение Q(тыс.руб.):" << endl;
	cin >> Q;
	
	days = 1;
	do
	{
		
		p = p + 0.3 * p;
		days++;

	} while (p <= Q);
	
	cout << "Количество дней: " << days + 1 << " дней" << endl;
	cout << "Выручка равна: " << p+0.3*p << " тыс.руб." << "\n\n";
	
}