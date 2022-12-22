#include <iostream>

using namespace std;

void main() {
	int a, b, c;
	setlocale(LC_ALL, "ru");
	printf("¬ведите числа a,b,c: \n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == b) {
		printf("a = b! ");
	}
	if (a == c) {
		printf("a = c! ");
	}
	if (c == b) {
		printf("c = b! ");
	}

	if (c != a && c != b && a != b) {
		printf("„исла между собой не равны!");
	}

}