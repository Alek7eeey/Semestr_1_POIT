#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	char arr_a[10], arr_b[10];
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	
	_itoa_s(a >> 4, arr_a, 2);
	int len_a=0;
	
	for (int i = 0; i < 10; i++) {

		if (arr_a[i] == '0' || arr_a[i] == '1')
		{
			len_a++;
		}
	}
	_itoa_s(b, arr_b, 2);
	cout << endl << arr_b;
	
	int count = 4;
	for (int i = len_a - 5; i < len_a; i++) {
		cout << arr_a[i];
		count--;
		if (count == 0)
		{
			break;
		}
	}
	cout << endl;
}
