#include <iostream>;
using namespace std;

void main()
{
	double j = 12, x = 0.1, y = 5 * pow(10, -6), s, t;

	s = 0.4*x-1/j*tan(y);
	t=s-sin(s);
	cout << "s = " << s << endl << "t = " << t << endl;

}
