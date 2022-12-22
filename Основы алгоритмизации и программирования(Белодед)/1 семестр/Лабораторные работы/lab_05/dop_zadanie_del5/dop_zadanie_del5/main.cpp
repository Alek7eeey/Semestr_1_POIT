#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	
	int a, b, c, sum;
	cout << "¬ведите три целых числа" << endl;
	cin >> a; cin >> b, cin >> c;

	if (a % 5 != 0 && b % 5 != 0 && c % 5 != 0)
	{
		cout << "ERROR!" << endl;
	}
	
	else
	{
		if (a % 5 == 0)
		{
			a == a;
		}
		else
		{
			a = 0;
		}

		if (b % 5 == 0)
		{
			b == b;
		}

		else
		{
			b = 0;
		}

		if (c % 5 == 0)
		{
			c == c;
		}

		else
		{
			c = 0;
		}


		sum = a + b + c;

		if (sum == 0)
		{
			cout << "ERROR!" << endl;
		}
		else
		{
			cout << "—умма равна = " << sum << endl;
		}
	}
	

}