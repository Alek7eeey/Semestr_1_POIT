#include<iostream>
#include<ctime>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL)); //c 1 января 1970 года, функция

	int kol, week; 
	cout << "Сколько дней ввелись измерения выпавших осадков (минимум - 8 дней)" << endl;
	cin >> kol;
	
	if (kol >= 8 && kol <= 70)
	{
		int* arr = new int[kol];

		cout << "Ежедневные измерения по дням ( " << kol << " )" << endl;

		for (int i = 0; i < kol; i++)
		{
			arr[i] = rand() % 20; //генератор/вывод случайных чисел, функция
			cout << "День " << i + 1 << " - " << arr[i] << " mm" << endl;
		}

		int max = arr[0], NMax = 0;

		for (int i = 0; i < kol; i++)
		{


			if (arr[i] > max)
			{
				max = arr[i];
				NMax = i + 1;
		
			}
		}

		week = NMax / 7;

		if (week % 7 != 0 || week==0)
		{
			week++;
			cout << "  " << endl; //пробел
			cout << "Максимальное количество осадков выпало на "<< week << " неделе (в " << NMax << " день измерений), количество осадков составило " << max << " mm " << endl << endl;
		}

	
		else
		{
			cout << "  " << endl; //пробел
			cout << "Максимальное количество осадков выпало на "<< week <<" неделе (в " << NMax << " день измерений), количество осадков составило " << max << " mm " << endl << endl;
		}

		

	}
	
	else
	{
		cout << "Введите корректный вариант!" << endl << endl;
	}


}