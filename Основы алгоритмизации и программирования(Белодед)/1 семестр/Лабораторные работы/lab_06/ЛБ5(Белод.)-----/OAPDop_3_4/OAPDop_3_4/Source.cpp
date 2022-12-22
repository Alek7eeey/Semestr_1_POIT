#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int summa[10], n, p, perc, money = 0;
	cout << "Какова первая закупочная цена? "; cin >> summa[0];
	cout << "\nСколько лет вы закупаете? "; cin >> n;
	cout << "\nКаков процент удешевления? "; cin >> p;
	for (int i = 1; i < n; i++) {
		
		perc = summa[i-1] * (100 - p) / 100;
		summa[i] = perc;
		money += summa[i-1];
		
	}
	
	
	cout << "\nКоличество потраченных денег: " << money;
}
