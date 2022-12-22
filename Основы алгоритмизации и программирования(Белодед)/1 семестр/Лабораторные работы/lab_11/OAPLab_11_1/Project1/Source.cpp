#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int pos, n, a;
	char arr_a[15], arr_before_pos[15], arr_after_pos[15];
	
	cout << "A = "; cin >> a;
	cout << "pos = "; cin >> pos;
	cout << "N = "; cin >> n;
	_itoa_s(a >> (pos - 1), arr_before_pos, 2);
	_itoa_s(a, arr_a, 2);
	int len_arr_a = 0, len_arr_before_pos = 0;
	for (int i = 0; i < 15; i++) {
		
		if (arr_a[i] == '1' || arr_a[i] == '0')
			len_arr_a++;                         //   Узнать количество элементов в основном массиве
		if (arr_before_pos[i] == '0' || arr_before_pos[i] == '1')
			len_arr_before_pos++;                //   Узнать количество элементов до позиции
    }
	for (int i = len_arr_before_pos - n; i < len_arr_before_pos; i++) {
		arr_before_pos[i] = '1'; // Присвоение n числам значение 1
	}
	
	/*cout << "Arr_a: " << arr_a << endl << "Arr_before_pos: " << arr_before_pos << endl;*/
	for (int i = len_arr_a  - pos + 1, j = 0; i < len_arr_a; i++, j++) {
		if (arr_a[i] == '1' || arr_a[i] == '0') 
			arr_after_pos[j] = arr_a[i];		// Заполнение массива после позиции
	}
	cout << "Число после изменений равно: " << arr_before_pos;
	for (int i = 0; i < 15; i++) {
		if (arr_after_pos[i] == '1' || arr_after_pos[i] == '0')
			cout << arr_after_pos[i];
		else
			continue; 
	}
	cout << endl << endl;
	



}