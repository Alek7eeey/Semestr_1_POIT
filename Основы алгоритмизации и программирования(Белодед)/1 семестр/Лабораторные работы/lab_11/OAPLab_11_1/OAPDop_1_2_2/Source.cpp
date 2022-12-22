#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int a, pos, n;
	char arr_a[10];
	int len_arr_a = 0;
	cout << "a = "; cin >> a;
	cout << "pos = "; cin >> pos;
	cout << "n = "; cin >> n;
	_itoa_s(a, arr_a, 2);
	cout << "До изменений: " << arr_a << endl;
	for (int i = 0; i < 10; i++) 
		if (arr_a[i] == '0' || arr_a[i] == '1')
			len_arr_a++;
	for (int i = 1 + len_arr_a - n - pos; i <= len_arr_a - pos; i++)
		arr_a[i] = '1';
	cout << "После изменений равно: " << arr_a << endl;
}