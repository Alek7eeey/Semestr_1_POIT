/*������������ ������ � ���������� ������. ����������, ����� ��� ������:
�����, �����, ���� ���������� ��� ������. */
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
   
    SetConsoleCP(1251);
    
    char symbol;
    cout << "������� ������: ";
    cin >> symbol;

    if (symbol >= '0' && symbol <= '9')
    {
        cout << "��� �����" << endl;
    }

    else if (symbol >= 'A' && symbol <= 'Z')
    {
        cout << "��� ��������� ����� ���������� ��������"<<endl;
    }

    else if (symbol >= 'a' && symbol <= 'z')
    {
        cout << "��� �������� ����� ���������� ��������"<<endl;
    }

    else if (symbol >= '�' && symbol <= '�')
    {
        cout << "��� ��������� ����� �������� ��������"<<endl;
    }

    else if (symbol >= '�' && symbol <= '�' || symbol == '�')
    {
        cout << "��� �������� ����� �������� ��������"<<endl;
    }

    else
        cout << "��� ����"<<endl;

    return 0;
}