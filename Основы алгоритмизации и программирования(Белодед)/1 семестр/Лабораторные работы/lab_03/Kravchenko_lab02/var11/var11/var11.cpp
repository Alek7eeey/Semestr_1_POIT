﻿#include <iostream>;
using namespace std;

void main()
{
	double a = 1.5, x = -1.8, z = 15 * pow(10, -9), w, d;

	w = tan(1) * (1 + x) + z - exp(a);
	d = 9 * sqrt(2 - 3 * x) + abs(a + 1);

	cout << "w = " << w << endl << "d = " << d << endl;
}
