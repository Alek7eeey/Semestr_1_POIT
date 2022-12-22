#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	
	float e = 0.0001, a = 3, b = 1, x;
	
	/*метод дихотомии */

	while (abs(a - b) > 2 * e)
	{
		x = (a + b) / 2;



		if (((((pow(x, 3) + x - 3) * (pow(a, 3))) + a - 3)) <= 0)
		{
			b = x;
		}
		else
		{
			a = x;

		}
		
	}
	
	cout << x << endl;


}