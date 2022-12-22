#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	float w, s, t = -7.4, y = 5, n = 9, j = 0;
	
	while (j < 2.1)
	{
		w = 0.6 * j + exp(t * j) * pow(4 * y / n, 2);
		s = sqrt(w - 0.1 * t) / (2 + pow(n, 2));
		cout << "w=" << w << "\t";
		cout << "s=" << s << endl;
		j = j + 0.1;
	}




}