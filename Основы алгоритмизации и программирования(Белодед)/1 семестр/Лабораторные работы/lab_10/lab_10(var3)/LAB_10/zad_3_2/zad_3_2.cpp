
/*«адан массив из k чисел.
ѕреобразовать массив следующим образом: все отрицательные элементы массива перенести в начало,
а все остальные Ц в конец.*/

#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int size;

	cout << "¬ведите размерность массива: ";
	cin >> size;

	int* arr = new int[size];
	int* arr_bolshe_null = new int[size];
	int* arr_menshe_null = new int[size];
	int k=0, l=0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << "\t";

		if (arr[i]<0)
		{
			arr_menshe_null[k] = arr[i];
			k++; 
		}

		if (arr[i] >= 0)
		{
			arr_bolshe_null[l] = arr[i];
			l++;
		}
	}
	cout << endl << endl;
	
	
	for (int i = 0; i < k; i++)
	{
		cout << arr_menshe_null[i] << "\t";
	}

	for (int i=0; i < l; i++)
	{
		cout << arr_bolshe_null[i] << "\t";

	}



	cout << endl;
	delete[] arr;
	delete[] arr_bolshe_null;
	delete[] arr_menshe_null;

}