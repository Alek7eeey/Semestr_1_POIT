#include "hello_h.h"
#include<iostream>
using namespace std;

void russianLetter()
{
	char symbal_A, symbal_B; int code_different, symbal_A1;
	
	cout << "¬ведите с клавиатуры заглавную букву русского алфавита" << endl;
	cin >> symbal_A;
	cout << "¬ведите с клавиатуры строчную букву русского алфавита" << endl;
	cin >> symbal_B;


	code_different = abs(symbal_A - symbal_B);
	cout << "разницы значений кодов букв русского алфавита в прописном и строчном написании равно = " << code_different << endl << endl;
}