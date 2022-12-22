#include <iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "ru");
	int p, q, days = 1;
	cout << "Введите первую выручку P: "; cin >> p;
	cout << "\nВведиье конечную выручку Q: "; cin >> q;
	while (p <= q) {
		days++;
		p = p + p * 0.03;
	}
	cout << "Количесвто дней: " << days << "\nВыручка равна: " << p;
}
