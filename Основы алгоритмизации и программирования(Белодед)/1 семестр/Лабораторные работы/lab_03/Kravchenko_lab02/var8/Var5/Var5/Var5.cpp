#include <iostream>;
using namespace std;

void main()
{
	double b=40,x=1.1,a=5*pow(10,-6),w,v;

	w = (a + b) * tan(x) / (x + 1);
	v = 1 / 2 * b - sqrt(w - a * b);
	cout << "w = " << w << endl << "v = " << v << endl;

}