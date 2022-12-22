#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	// Метод трапеции
	float a = 2, b = 3, n, h, x;
	float s = 0;
	cout << "Введите значения n: "; cin >> n;
	x = a;
	h = b / n - a / n;
	while (x <= b - h) {
		s += h * (pow(x, 3) +1 + pow(x + h, 3) +1) / 2;
		x += h;
	}
	cout << "Площадь равна: " << 4 * s << endl;
	//// Методом параболы
	//
	h = (b - a) / n / 2;
	x = a + 2 * h;
	float s1 = 0, s2 = 0;
	int i = 1;
	for ( ; i < n; i++) {
		s2 += pow(x, 3) + 1;
		x += h;
		s1 += pow(x, 3) + 1;
		x += h;

	}
	s = h / 3 * (pow(a, 3) + 1 + 4 * (pow(a + h, 3) + 1 + 4 * s1 + 2 * s2 + pow(b, 3) + 1));
	cout << "Площадь методом параболлы равна: " << s << endl;



}