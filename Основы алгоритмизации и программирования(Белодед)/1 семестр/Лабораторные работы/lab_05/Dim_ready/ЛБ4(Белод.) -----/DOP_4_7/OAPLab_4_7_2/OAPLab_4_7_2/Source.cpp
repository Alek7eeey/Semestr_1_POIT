#include <iostream>
#include <stdio.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int xa, ya, xb, yb, xc, yc, xd, yd;
	printf("Введите числа аx, ay, bx, by, cx, cy, dx, dy");
	scanf_s("%d %d %d %d %d %d %d %d", &xa, &ya, &xb, &yb, &xc, &yc, &xd, &yd);
	cout << endl;
	float ab = pow(pow(xb - xa, 2) + pow(yb - ya, 2), 1 / 2.0);
	float bc = pow(pow(xc - xb, 2) + pow(yc - yb, 2), 1 / 2.0);
	float cd = pow(pow(xc - xd, 2) + pow(yc - yd, 2), 1 / 2.0);
	float ad = pow(pow(xd - xa, 2) + pow(yd - ya, 2), 1 / 2.0);
	if (ab == bc && bc == cd && cd == ad) {
		cout << "Это квадрат" << endl;

	}

	else if (ad == bc && ab == cd && ab * ab + ad * ad == bc * bc + cd * cd) {
		cout << "Это прямоугольник!" << endl;
	}

	else if (ad != bc && (yd - ya) / (xd - xa) == (yc - yb) / (xc - xb)) {
		cout << "Это трапеция!" << endl;
	}

	else if (ab != cd && (yb - ya) / (xb - xa) == (yd - yc) / (xd - xc)) {
		cout << "Это трапеция!" << endl;
	}

	else {
		cout << "Это произвольный четырехугольний!" << endl;
	}

	
	

	
}