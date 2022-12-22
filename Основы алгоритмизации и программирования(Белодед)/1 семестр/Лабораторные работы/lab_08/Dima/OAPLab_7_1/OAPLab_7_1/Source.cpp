#include <iostream> 
using namespace std;
void main() {
	double a[] = { 2.3, 7 , -2, -4 , 9 }, k = 6, f, g, sum = 0; 
	for (int i = 1; i <=5 ; i++) {
		sum += a[i-1] / i;
	}
	while (k < 7) {
		f = k;
		g = f / sum;
		k += 0.2;
		cout << "F is equal " << f << "\nG is equal " << g << "\n\n";
	}
}