#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int k, l, m, n; // k - l позици€ слона ; m - n позици€ фигуры
	cout << "¬ведите позицию слона: "; cin >> k; cin >> l;
	cout << "\n¬ведите позицию фигуры: "; cin >> m; cin >> n;

	if ((k + 2) * (l + 1) == m * n || (k + 2) * (l - 1) == m * n  || (k - 2) * (l + 1) == m * n || (k - 2) * (l - 1) == m * n || (k + 1) * (l + 2) == m * n || (k + 1) * (l - 2) == m * n || (k - 1) * (l + 2) == m * n || (k - 1) * (l - 2) == m * n) {
		cout << "\n\n—лон побьет фигуру! " << endl;
     }
	else {
		cout << "\n‘игура в безопасности! \n\n";
	}
	
	
	

}