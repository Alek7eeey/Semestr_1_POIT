#include <iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "ru");
	int p, q, days = 1;
	cout << "������� ������ ������� P: "; cin >> p;
	cout << "\n������� �������� ������� Q: "; cin >> q;
	while (p <= q) {
		days++;
		p = p + p * 0.03;
	}
	cout << "���������� ����: " << days << "\n������� �����: " << p;
}
