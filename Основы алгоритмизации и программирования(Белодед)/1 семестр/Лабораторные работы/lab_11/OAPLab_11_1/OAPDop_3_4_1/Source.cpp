#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int a, ziros=0, ones=0;
	char arr_a[15];
	cout << "A = "; cin >> a;
	_itoa_s(a, arr_a, 2);
	cout << "Arr_a = " << arr_a << endl << endl;
	for (int i = 0; i < 15; i++) {
		if (arr_a[i] == '1')
			ones++;
		else if (arr_a[i] == '0')
			ziros++;
	}
	cout << "Difference equals " << ones - ziros << endl;;

	 
}