#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "ru");
	int a, b, p, q, r, s;
	cout << "������� ������� ���� a �� b ������: "; cin >> a; cin >> b;
	cout << "\n������� ������� ������� ���� p �� q ������ : "; cin >> p; cin >> q;
	cout << "\n������� ������� ������� ���� r �� s ������: "; cin >> r; cin >> s;
	if (p + r >= a || q + s >= b) {
		cout << "\n����� ���� ��������� �� ����� ������� ������!" << endl;
	}
	else {
		cout << "\n����� ���� ��������� �� ����� ������� �����!" << endl;
	}

}
