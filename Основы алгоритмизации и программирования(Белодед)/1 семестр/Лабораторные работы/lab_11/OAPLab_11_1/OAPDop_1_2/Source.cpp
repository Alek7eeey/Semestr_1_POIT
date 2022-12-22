#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	char arr_b[15], arr_a[15], arr_a_before[15], arr_b_before[15];
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	
	_itoa_s(a, arr_a, 2);
	_itoa_s(b, arr_b, 2);
	
	_itoa_s(a >> 1, arr_a_before, 2);
	_itoa_s(b >> 2, arr_b_before, 2);
	
	cout << "a = " << arr_a << endl << "b = " << arr_b << endl << endl;
	
	int len_arr_a_before = 0;
	int len_arr_b=0;
	
	for (int i = 0; i < 14; i++) {
		if (arr_b[i] == '0' || arr_b[i] == '1')
			len_arr_b++;  // Количество элементов в массиве б
		if (arr_a_before[i] == '0' || arr_a_before[i] == '1')
			len_arr_a_before++; // Количество элементов в массиве а после 2 элемента
    }
	// Начало вывода:

	cout << "Измененное число равно: " << arr_b_before;
	
	for (int i = len_arr_a_before - 5; i < len_arr_a_before; i++) 
		cout << arr_a_before[i];
	
	for (int i = len_arr_b - 2; i < len_arr_b; i++)
		cout << arr_b[i];

	

}