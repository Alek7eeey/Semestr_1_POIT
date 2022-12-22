#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "ru");
	int a, b, p, q, r, s;
	cout << "Введите размеры поля a на b метров: "; cin >> a; cin >> b;
	cout << "\nВведите размеры первого дома p на q метров : "; cin >> p; cin >> q;
	cout << "\nВведите размеры второго дома r на s метров: "; cin >> r; cin >> s;
	if (p + r >= a || q + s >= b) {
		cout << "\nТакие дома поставить на такую площадь нельзя!" << endl;
	}
	else {
		cout << "\nТакие дома поставить на такой участок можно!" << endl;
	}

}
