#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int n, i;
	cout << "������� ����������� ����� n" << endl;
	cin >> n;
    
    for (i = n; i > 0; i--) 
    {
        
        if (n % i == 0) 
        {
            cout << "��������: " << i << endl;
        
        }
    
    }
      system("pause");
    
    




}