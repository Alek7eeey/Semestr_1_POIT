#include<iostream> //���� �������������� ����� x, y, z. �������� �������� � ���������� ���, ����� x >= y> = z//
using namespace std;

void main()  
{
	
	
	setlocale(LC_ALL, "Rus");
	int x, y, z,t;
	char(probel) = ' ';
	cout << "������� �������������� ����� x:";
	cin >> x;
	cout << "������� �������������� ����� y:";
	cin >> y;
	cout << "������� �������������� ����� z:";
	cin >> z;
	
	if (x < y)
	{
		t = x, x = y, y = t;
	}
		if(y<z)
		{
			t = y, y = z, z = t;
		}

		
		if (x < y)
		{
			t = x, x = y, y = t;
		}
		
	
	cout << " x2, y2, z2 = " << x << probel << y <<probel << z << endl;




}