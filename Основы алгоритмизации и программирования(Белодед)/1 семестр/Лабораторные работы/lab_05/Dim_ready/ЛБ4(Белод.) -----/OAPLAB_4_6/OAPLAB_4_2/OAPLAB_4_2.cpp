#include <iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "ru");
	char name[200];
	int year;
	cout << "Как вас зовут?"; cin >> name;
	cout << "\nСколько вам лет? "; cin >> year;
	switch (year) {
	case 1:
		cout << "\nВы малы!";
		break;
	case 2:
		cout << "\nВы малы!";
		break;
	case 3:
		cout << "\nВы малы!";
		break;
	case 4:
		cout << "\nВы малы!";
		break;
	case 5:
		cout << "\nВы малы!";
		break;
	case 7:
		cout << "\nВы малы!";
		break;
	case 8:
		cout << "\nВы малы!";
		break;
	case 9:
		cout << "\nВы малы!";
		break;
	case 10:
		cout << "\nВы малы!";
		break;
	case 11:
		cout << "\nВы малы!";
		break;
	case 12:
		cout << "\nВы малы!";
		break;
	case 13:
		cout << "\nВы малы!";
		break;
	case 14:
		cout << "\nВы малы!";
		break;
	case 15:
		cout << "\nОтличный возраст!";
		break;
	case 16:
		cout << "\nОтличный возраст!";
		break;
	case 17:
		cout << "\nОтличный возраст!";
		break;
	case 18:
		cout << "\nОу, вы уже совершеннолетний!";
		break;
	default:
		cout << "\nА мне 2 дня";
		break;
	}
	int cource;
	cout << "\nКакой вы курс?"; cin >> cource;
	switch (cource) {
	case 1:
		cout << "\nПоздравляю с поступлением вас, " << name << "!";
		break;
	case 2: 
		cout << "\nВы смогли пройти Белодеда, поздравляю!";
		break;
	case 3:
		cout << "\nВы почти свободны)";
		break;
	case 4:
		cout << "\nУдачи в написании диплома!";
		break;
	default:
		cout << "\nЭто сделано для учащихся БГТУ!";
		break;



	}




	}


	



