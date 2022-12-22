#include <iostream>;
using namespace std;

void main()
{	double s,t,x=0.1,j=12, y=5*pow(10,-6);

s = 0.4 * x - 1 / j * tan(y);
t = s-sin(s);

cout <<"s = " << s << endl <<"t = "<< t << endl;


}