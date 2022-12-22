#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int weather;
	cout << "Введите сведения о погоде(1 - хорошая, 2 - плохая)" << endl;
	cin >> weather;
	if (weather == 1)
	{
		cout << "Студент пойдёт гулять" << endl;
	}

	else if (weather == 2)
	{
		cout << "Студент будет писать реферат" << endl;
	}

	else
	{
		cout << "Некорректный вариант" << endl;

	}
}