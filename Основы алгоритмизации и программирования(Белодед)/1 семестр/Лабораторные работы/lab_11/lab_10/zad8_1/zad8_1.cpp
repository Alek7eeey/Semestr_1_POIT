
/*1.	Установить в ноль каждый третий бит целого числа А*/

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A;
	char tmp[30];

	cout << "Введите с клавиатуры целое число А" << endl<<endl;
	cin >> A;
	
	_itoa_s(A, tmp, 2);
	
	cout << "Число А: " << tmp << endl;
	
	for (int i = 0; i < strlen(tmp); i++)
	{
		

		if ( (i + 1) % 3 == 0 )
		{
			tmp[i] = '0';
		}

	}
	cout << endl;
	cout <<"каждый третий бит целого числа заменяем на ноль: " << tmp << endl<<endl;
}
