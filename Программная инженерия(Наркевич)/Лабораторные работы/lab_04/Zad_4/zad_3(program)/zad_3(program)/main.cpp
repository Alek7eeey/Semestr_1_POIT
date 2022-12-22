/*Пользователь вводит с клавиатуры символ. Определить, какой это символ:
Буква, цифра, знак препинания или другое. */
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
   
    SetConsoleCP(1251);
    
    char symbol;
    cout << "Введите символ: ";
    cin >> symbol;

    if (symbol >= '0' && symbol <= '9')
    {
        cout << "Это цифра" << endl;
    }

    else if (symbol >= 'A' && symbol <= 'Z')
    {
        cout << "Это заглавная буква латинского алфавита"<<endl;
    }

    else if (symbol >= 'a' && symbol <= 'z')
    {
        cout << "Это строчная буква латинского алфавита"<<endl;
    }

    else if (symbol >= 'А' && symbol <= 'Я')
    {
        cout << "Это заглавная буква русского алфавита"<<endl;
    }

    else if (symbol >= 'а' && symbol <= 'я' || symbol == 'ё')
    {
        cout << "Это строчная буква русского алфавита"<<endl;
    }

    else
        cout << "Это знак"<<endl;

    return 0;
}