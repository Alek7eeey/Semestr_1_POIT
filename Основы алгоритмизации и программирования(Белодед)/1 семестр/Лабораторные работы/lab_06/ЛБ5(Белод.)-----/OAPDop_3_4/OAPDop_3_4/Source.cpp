#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int summa[10], n, p, perc, money = 0;
	cout << "������ ������ ���������� ����? "; cin >> summa[0];
	cout << "\n������� ��� �� ���������? "; cin >> n;
	cout << "\n����� ������� �����������? "; cin >> p;
	for (int i = 1; i < n; i++) {
		
		perc = summa[i-1] * (100 - p) / 100;
		summa[i] = perc;
		money += summa[i-1];
		
	}
	
	
	cout << "\n���������� ����������� �����: " << money;
}
