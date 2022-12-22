#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	// Метод трапеции
	float a = 5, b = 11, n, h, x;
	float s = 0;
	cout << "Введите значения n: "; cin >> n;
	x = a;
	h = b / n - a / n;
	while (x <= b - h) {
		s += h * (exp(x) +2  + exp(x + h) +2) / 2;
		x += h;
	}
	cout << "Площадь равна: " << 4 * s << endl;
	//// Методом параболы
	//
	h = (b - a) / n / 2;
	x = a + 2 * h;
	float s1 = 0, s2 = 0;
	int i = 1;
	for (; i < n; i++) {
		s2 += exp(x) +2;
		x += h;
		s1 += exp(x) + 2;
		x += h;

	}
	s = h / 3 * (exp(a) + 2 + 4 * (exp(a + h) +2 + 4 * s1 + 2 * s2 + exp(b) +2));
	cout << "Площадь методом параболлы равна: " << s << endl;



}