#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int pos, n, a;
	char arr_a[15], arr_before_pos[15], arr_after_pos[15];
	cout << "A = "; cin >> a;
	cout << "pos = "; cin >> pos;
	cout << "N = "; cin >> n;
	_itoa_s(a >> 2, arr_before_pos, 2);
	_itoa_s(a, arr_a, 2);
	cout << arr_before_pos;


}