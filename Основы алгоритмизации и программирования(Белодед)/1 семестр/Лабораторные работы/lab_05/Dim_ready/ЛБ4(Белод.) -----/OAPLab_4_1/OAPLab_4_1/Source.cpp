#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	float b, z, x = 4e-3, s = 1.1, j;
	
	cout << "ВВедите j: "; cin >> j;
	
	
	/*printf_s("Введите j "); 
	scanf_s("%f", &j);*/
	b = s + (5 * x + j);

	if (b < 1.5)
		z = sqrt(x + 0.3 * j) + b;
	else
		z = abs(x * j + b);

	cout << "j = " << j << "\t" << "z = " << z << endl;
	
	/*printf("j=%f\t", j);
	printf("z=%f\n", z);*/
}

