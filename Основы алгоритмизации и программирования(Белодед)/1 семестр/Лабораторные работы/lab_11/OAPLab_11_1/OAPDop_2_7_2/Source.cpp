#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int a, b, n, pos, m, qpos;
	char arr_a[17], arr_b[17];
	cout << "a = "; cin >> a;
	cout << "n = "; cin >> n;
	cout << "pos = "; cin >> pos;
	cout << endl << "b  = "; cin >> b;
	cout << "m = "; cin >> m;
	cout << "qpos = "; cin >> qpos;
	_itoa_s(a, arr_a, 2);
	_itoa_s(b, arr_b, 2);
	cout << endl << "arr_a = " << arr_a << endl << "arr_b = " << arr_b << endl;
	int len_a = 0, len_b = 0;
	for (int i = 0; i < 17; i++) {
		if (arr_a[i] == '0' || arr_a[i] == '1')
			len_a++; // Length of array A
		if (arr_b[i] == '0' || arr_b[i] == '1')
		    len_b++; // length of array B
	}
	char arr_a_before[17];
	_itoa_s(a >> pos - 1, arr_a_before, 2);
	cout << "A after changing - " << arr_a_before;
	for (int i = 0; i < n; i++)
		cout << '1'; // Add '1' after pos
	for (int i = len_a - pos + 1; i < len_a; i++)
		cout << arr_a[i]; // Add last capter
	// Changing B:
	int len_b_before;
	char arr_b_before[17];
	_itoa_s(b >> qpos - 1, arr_b_before, 2);
	len_b_before = len_b - qpos;
	cout << endl << "Changing of arr B - ";
	for (int i = 0; i < len_b; i++) {
		if (i < len_b - qpos - m - 1)
			cout << arr_b[i];
		else if (i > len_b - qpos - m && i <= len_b - qpos)
			cout << "1";
		else
			cout << arr_b[i];
	}
	cout << endl << endl;
}