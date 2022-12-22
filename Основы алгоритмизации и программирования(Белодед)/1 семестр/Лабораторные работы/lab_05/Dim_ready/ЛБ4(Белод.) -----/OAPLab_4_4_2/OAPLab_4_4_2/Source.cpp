#include <iostream>
#include <stdio.h>

using namespace std;

void main() {
	int a, b, c;
	float d, x1, x2; // Дискриминант и значения х
	setlocale(LC_ALL, "ru");
	printf("Введите числа А, Б и С: ");
	scanf_s("%d %d %d", &a, &b, &c);
	d = pow(b, 2) + 4 * a * c;
	if (d < 0) {
		printf("Корней нет!");
	};
	
	x1 = (-b + pow(d, 1 / 2.0)) / 2*a;
	x2 = (-b - pow(d, 1 / 2.0)) / 2 * a;
	printf("\nx1 = %f\nx2 = %f", x1, x2);
	


}