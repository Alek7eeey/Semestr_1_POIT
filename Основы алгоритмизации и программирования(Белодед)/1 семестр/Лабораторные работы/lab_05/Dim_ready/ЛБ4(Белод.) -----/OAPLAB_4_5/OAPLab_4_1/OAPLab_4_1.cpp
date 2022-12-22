
#include <iostream>


using namespace std;

void main()
{
	
	setlocale(LC_ALL, "rus");
	int month;
	cout << "Введите номер месяца: "; cin >> month;
	switch (month) {
	case 1: 
		cout << "\nПора года " << month << "-го месяца - Зима!";
		break;
	case 12:
		cout << "\nПора года " << month << "-го месяца - Зима!";
		break;
	case 2:
		cout << "\nПора года " << month << "-го месяца - Зима!";
		break;
	case 3:
		cout << "\nПора года " << month << "-го месяца - Весна!";
		break;
	case 4:
		cout << "\nПора года " << month << "-го месяца - Весна!";
		break;
	case 5:
		cout << "\nПора года " << month << "-го месяца - Весна!";
		break;
	case 6:
		cout << "\nПора года " << month << "-го месяца - Лето!";
		break;
	case 7:
		cout << "\nПора года " << month << "-го месяца - Лето!";
		break;
	case 8:
		cout << "\nПора года " << month << "-го месяца - Лето!";
		break;
	case 9:
		cout << "\nПора года " << month << "-го месяца - Осень!";
		break;
	case 10:
		cout << "\nПора года " << month << "-го месяца - Осень!";
		break;
	case 11:
		cout << "\nПора года " << month << "-го месяца - Осень!";
		break;
	default: 
		cout << "Вы должны были выбрать число от 1 до 12!";

	}

	
	

}
