#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int a, pos, n, b, m, qpos;
	char arr_a[15], arr_a_before[15], arr_b[15], arr_b_before[15];
	cout << "Enter a, n, pos "; cin >> a >> n >> pos;
	cout << "Enter b, m, qpos "; cin >> b >> m >> qpos;
	_itoa_s(a, arr_a, 2);
	_itoa_s(b, arr_b, 2);
	_itoa_s(a >> pos - 1, arr_a_before, 2);
	_itoa_s(b >> qpos - 1, arr_b_before, 2);
	cout << endl << "Arr_a = " << arr_a << endl;
	cout << "Changed arr_a: " << arr_a_before;
	for (int i = 0; i < n; i++)
		cout << '1'; // Добавляем в 1
	int len_a = 0, len_b = 0;
	for (int i = 0; i < 15; i++){
		if (arr_a[i] == '0' || arr_a[i] == '1')
			len_a++;  // Длина массива с 0 и 1
	    if (arr_b[i] == '0' || arr_b[i] == '1')
		    len_b++;  // Длина массива с 0 и 1
	}

	for (int i = len_a - pos + 1; i < len_a; i++)
		cout << arr_a[i];
	// Work with number b
	cout << endl << endl << "Arr_b = " << arr_b << endl << "Changed array B = ";
	for (int i = len_b - qpos - m + 1; i <= len_b - qpos; i++) 
		if (arr_b[i] == '0')
			arr_b[i] = '1';
	for (int i = 0; i < len_b; i++)
		cout << arr_b[i];
	cout << "\n\n\n";
	
		

		

	
	


}