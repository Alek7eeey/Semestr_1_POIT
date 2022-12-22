#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	
	float w, s, t=-7.4, y=5, n=9, j;
	
	for (int n = 1; n <= 3; n++)
	{
		cout << "Введите j: " << endl;
		cin >> j;
		
		w = 0.6 * j + exp(t*j) * pow (4*y/n,2);
		s = sqrt(w-0.1*t) / (2+pow(n,2));
		
		cout << "w = " << w << endl;
		cout << "s = " << s << endl<<endl;
	}
}




