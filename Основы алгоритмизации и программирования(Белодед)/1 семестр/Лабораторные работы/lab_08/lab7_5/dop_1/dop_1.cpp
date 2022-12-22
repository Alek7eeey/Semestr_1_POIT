#include<iostream>
using namespace std;

void main()
{
    
    setlocale(LC_ALL, "Rus");
    const int size = 6;
    int a[size];
    double sum=0;
    cout << "¬ведите последовательность чисел" << endl;
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];
    cin >> a[3];
    cin >> a[4];
    cin >> a[5];
    
    for (int i = 0; i < size; i++)
    {
        a[i];
        
        if (a[i] % 2 == 0)
        {
            sum = sum + a[i];
        }

    }
    cout << "—умма чЄтных чисел равна = " << sum << endl;
}


