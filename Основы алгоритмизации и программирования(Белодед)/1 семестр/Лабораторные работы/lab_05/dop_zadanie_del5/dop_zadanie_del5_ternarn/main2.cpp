#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, c, sum;
	cout << "¬ведите три целых числа" << endl;
	cin >> a; cin >> b, cin >> c;

	a % 5 != 0 && b % 5 != 0 && c % 5 != 0 ? printf("ERROR!\n") :
	a % 5 == 0 ? a == a : a = 0;
	b % 5 == 0 ? b == b : b = 0;
	c % 5 == 0 ? c == c : c = 0;
	sum = a + b + c;;

	sum == 0? printf("ERROR!\n"):
		printf("—умма равна = %d", sum);

			
	

}