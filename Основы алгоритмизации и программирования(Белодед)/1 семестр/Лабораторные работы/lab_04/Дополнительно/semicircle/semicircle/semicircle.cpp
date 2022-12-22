#include <iostream>
#include <iomanip> //манипуляторы определены в заголовочном файле //
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");

	char c, probel;
	probel = ' ';
	cout << "Введите символ: ";
	cin >> c;                 //стандартный поток ввода (с клавиатуры)//
	//полукруг//
	cout << setw(35) << setfill(probel) << probel;                //setw-количество пробелов от начала, setfill-символ-заполнитель//
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	


}
