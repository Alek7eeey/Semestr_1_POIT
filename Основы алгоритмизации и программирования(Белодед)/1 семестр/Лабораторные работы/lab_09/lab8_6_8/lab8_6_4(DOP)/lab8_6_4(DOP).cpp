#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	// Метод трапеции
	float a = 2, b = 3, n = 200, h, x;
	float s = 0;
    
	x = a;
	h = b / n - a / n;

	while (x<=b-h)
	{
		s = s + h * ( exp(x) - 1 / x + exp(x + h) - 1 / (x+h) ) / 2;
			x += h;
	}
	cout << "Площадь методом трапеции равна: " << 4*s << endl;

	//метод параболы
	h = (b - a) / n / 2;
	x = a + 2 * h;
	float s1 = 0, s2 = 0;
	int i = 1;

	for (; i < n; i++)
	{
		s2 += exp(x) - 1 / x;
		x += h;
		s1 += exp(x) - 1 / x;
		x += h;
		


	}
	s = h / 3 * (exp(a) - 1 / a + 4 * exp(a + h) - 1 / (a + h) + 4 * s1 + 2 * s2 + exp(b) - 1 / b);
	cout << "Площадь методом параболлы равна: " << s << endl << endl;
}