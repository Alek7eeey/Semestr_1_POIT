#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int k;
	puts("Вы хотите приобрести автомобиль?(1-да, 2-нет)");
	cin >> k;
	switch (k)
	{
	case 1: {puts("Какой?(1-майбах,2-тайота,3-лада)");
		cin >> k;
		switch (k)
		{
		case 1: puts("Не слишком дорого???"); break;
		case 2: puts("Отличный выбор!"); break;
		case 3: puts("Сомнительный выбор"); break;
		default: puts("Некорректный вариант");
		}break;
	}
	case 2: puts("Полезно ходить пешком"); break;
	default: puts("Некорректный вариант"); break;
	}
	return 0;
}