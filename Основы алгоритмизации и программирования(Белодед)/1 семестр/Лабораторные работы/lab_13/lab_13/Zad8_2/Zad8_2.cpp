
/*Дана строка, состоящая из групп нулей и единиц.
Найти группы с четным количеством символов*/

#include <iostream>
#include <cstring>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	char string[] = "00011110111011000011";

    cout << "Строка: " << string << endl;
    cout << "Группы с чётным количеством символов: " <<" ";

    for (int i = 0; string[i] != '\0'; i++)
    {
        int k = i;
        
        while (string[i] == string[i + 1])  i++; 
        
            if ((abs(k - i) % 2))
            {
                for (int t = k; t <= i; t++)
                {
                    cout << string[t];
                }
                cout << " ";


            }
    }

    cout << endl;



}