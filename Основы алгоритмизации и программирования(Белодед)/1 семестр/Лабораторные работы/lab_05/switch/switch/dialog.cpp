#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int k;
	cout << "У вас есть любимая пора года?(1-да,2-нет)" << endl;
	cin >> k;
	switch (k)
	{


	case 1: {cout << "Какая?(1-лето,2-зима,3-весна,4-осень)"<<endl;
		cin >> k;
		switch (k)


		{
		case 1: cout << "Мне тоже нравится, но бывает слишком жарко"<<endl; break;
		case 2: cout << "Мне тоже нравится, но бывает слишком холодно"<<endl; break;
		case 3: cout << "Мне тоже нравится, но погода бывает слишком неустойчивая..."<<endl; break;
		case 4: cout << "Мне тоже нравится, но много дождливых дней..."<<endl; break;
		default: cout << "Некорректный вариант" << endl;
		} break;
	}

	case 2: cout << "Мне тоже нравится каждая пора года по-своему!"<<endl; break;
	default: cout << "Некорректный вариант"<<endl; break;
	}

	}