#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int years;
	cout << "������� ����� ����: "; cin >> years;
	if (years % 4 == 0) {
		cout << "��� " << years << " ����������!" << endl;
	}
	else {
		cout << "��� " << years << " ������������!" << endl;
	}
}