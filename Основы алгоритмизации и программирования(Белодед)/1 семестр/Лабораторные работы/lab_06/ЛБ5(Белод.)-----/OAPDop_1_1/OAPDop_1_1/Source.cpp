#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	
	int first_number = 100000;
	int l_num = 999999;
	bool it_is = false;
	for (int i = first_number; i < l_num; i++) {
		int num = i, numNext = ++i, sum = 0, sum2 = 0;
		for (int j = 0; j < 6; j++) {
			sum += num % 10;
			sum2 += numNext % 10;
			num = num / 10;
			numNext = numNext / 10;
		}
		if (sum % 7 == 0 && sum2 % 7 == 0) {
			cout << "Equal";
			it_is = true;
		}
		
	}
	if (!it_is) {
		cout << "Такое нельзя!" << endl;
	}
	system("pause");
}