#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int  n[10];
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			cout << "������� 10 ����� ������������������";
		}
		cin >> n[i];

	}
	for (int i = 0; i < n[9]; i++) {
		if (n[i] < 0) {
			cout << "����� �������� " << i + 1 << endl;
			break;
		}
		else {
			cout << "������������� ���!" << endl;
		}
	}
	system("pause");
}