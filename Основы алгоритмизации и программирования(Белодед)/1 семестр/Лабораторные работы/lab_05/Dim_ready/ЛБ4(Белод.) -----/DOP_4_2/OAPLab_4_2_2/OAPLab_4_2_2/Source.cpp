#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int k, l, m, n; // k - l ������� ����� ; m - n ������� ������
	cout << "������� ������� �����: "; cin >> k; cin >> l;
	cout << "\n������� ������� ������: "; cin >> m; cin >> n;

	if ((k + 2) * (l + 1) == m * n || (k + 2) * (l - 1) == m * n  || (k - 2) * (l + 1) == m * n || (k - 2) * (l - 1) == m * n || (k + 1) * (l + 2) == m * n || (k + 1) * (l - 2) == m * n || (k - 1) * (l + 2) == m * n || (k - 1) * (l - 2) == m * n) {
		cout << "\n\n���� ������ ������! " << endl;
     }
	else {
		cout << "\n������ � ������������! \n\n";
	}
	
	
	

}