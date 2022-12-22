#include <iostream>
using namespace std;


void main() 
{
	setlocale(LC_ALL, "Rus");
	// Метод трапеции
	float a = 1, b = 4, n=200, h, x;
	float s = 0;
	x = a;
	h = b / n - a / n;
	
	while (x <= b - h) {
		s = s + h * (pow(x,4) + 4 + pow(x + h,4) + 4) / 2;
		x = x + h;
	}
	cout << "Площадь методом трапеции равна: " << 4*s << endl;
	
	// Методом параболы
	
	h = (b - a) / n / 2;
	x = a + 2 * h;
	
	float s1 = 0, s2 = 0;
	int i = 1;
	
	for (; i < n; i++) 
	{
		s2 = s2 + pow(x,4)+4;
		x += h;
		s1 = s1 + pow(x,4)+4;
		x += h;

	}
	s = h / 3 * (pow (a, 4) + 4 + 4 * pow (a+h, 4) + 4 *s1 + 2 *s2 + pow (b, 3) - 1);
	
	cout << "Площадь методом параболлы равна: " << s << endl<<endl;



}