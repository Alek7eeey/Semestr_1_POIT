#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int years;
	cout << "Введите номер года: "; cin >> years;
	if (years % 4 == 0) {
		cout << "Год " << years << " високосный!" << endl;
	}
	else {
		cout << "Год " << years << " невисокосный!" << endl;
	}
}