
#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, a2, n, pos; char tmp[20]; char tmp2[20], tmp_after_pos[20];
	cout << "a = "; cin >> a;
	cout << "n = "; cin >> n;
	cout << "pos = "; cin >> pos;
	a2 = a;

	_itoa_s(a, tmp, 2);
	cout << "a = " << tmp << endl;
	/*_itoa_s(a << 2, tmp, 2);
	cout << "a = " << tmp << endl;*/
	_itoa_s(a2 >> pos, tmp2, 2);
	cout << "a2 = " << tmp2 << endl;
	int count_tmp2 = 0, count_tmp = 0;
	for (int i = pos; i < 20; i++) {
		if (tmp[i] == '1' || tmp[i] == '0')
			count_tmp++;
	}

	for (int i = 0; i < 20; i++) {
		if (tmp2[i] == '1' || tmp2[i] == '0') {
			count_tmp2++;
			if (tmp2[i + 1] != '1' && tmp2[i = 1] != '0')
			{
				for (int i = count_tmp - pos, j = 0; i < count_tmp; i--, j++) {
					tmp_after_pos[j] = tmp[i];
				}
				break;
			}
		}
		if (i == 19) {
			for (int j = 0; j < n; j++) {
				tmp2[count_tmp2 - 1] = '1';
				count_tmp2--;
			}
		}
	}
	cout << tmp2;
	/*for (int i = 0; i < count_tmp; i++) {
		cout << tmp_after_pos[i];
		if (tmp_after_pos[i + 1] != '0' && tmp_after_pos[i + 1] != '1')
			break;
	}*/
}
