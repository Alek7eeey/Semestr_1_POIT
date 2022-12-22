#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int entrance, flat, floor, ostatok;
	cout << "Введите номер квартиры: " << endl;
	cin >> flat;
	entrance = (flat - 1) / 36 + 1;
	ostatok = (flat - 1) % (9 * 4);  //остаток от деления//
	floor = ostatok / 4 + 1;
	cout << "Номер этажа квартиры: " << floor  <<" Номер подъезда: "<<entrance << endl;




}
