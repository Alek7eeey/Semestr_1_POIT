#include <iostream>
#include <ctime>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL)); //c 1 января 1970 года, функция

	int number;
	
	cout << "Введите количество элементов массива" << endl;
	cin >> number;
	
	int* arr = new int[number]; //указатель адреса (arr - адрес, указывающий на переменную number)
	                            /*new — оператор, обеспечивающий выделение динамической памяти в куче.*/
    cout << endl;
	
	cout << "Массив из " << number << " элементов:" << endl;
	
	for (int i = 0; i < number; i++)
	{
		arr[i] = rand() % 99; //генератор/вывод случайных чисел, функция
		cout << arr[i] << " ";
	}

	int nElements = 0;
	
	for (int i = 0; i < number - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			nElements++;
		}
	}
	
	cout <<endl<<endl; 
	
	cout << "Количество соседних элементов с одинаковыми значениями равно " << nElements << endl << endl;


}