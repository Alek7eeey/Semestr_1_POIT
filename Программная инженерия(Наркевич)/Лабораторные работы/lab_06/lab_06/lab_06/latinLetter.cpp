#include "hello_h.h"
#include<iostream>
using namespace std;

void latinLetter()
{
	char symbal_A, symbal_B; int code_different, symbal_A1;
	cout << "¬ведите с клавиатуры заглавную букву латинского алфавита" << endl;
	cin >> symbal_A;
	cout << "¬ведите с клавиатуры строчную букву латинского алфавита" << endl;
	cin >> symbal_B;

	
	code_different = abs(symbal_B - symbal_A);
	
	cout << "разницы значений кодов букв латинского алфавита в прописном и строчном написании равно = " << code_different << endl << endl;


	
}






