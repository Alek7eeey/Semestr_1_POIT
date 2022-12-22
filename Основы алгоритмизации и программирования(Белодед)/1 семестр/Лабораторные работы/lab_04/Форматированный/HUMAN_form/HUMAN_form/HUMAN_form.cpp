#include <stdio.h> 
#include<iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	puts("Введите символ: ");
	
	char c = getchar();
	printf("          %c%c \n", c, c);
	printf("         %c%c%c%c\n", c, c, c, c);
	printf("         %c%c%c%c\n", c, c, c, c);
	printf("          %c%c \n", c, c);
	printf("         %c%c%c%c\n", c, c, c, c);
	printf("        %c    %c\n", c, c);
	printf("       %c%c    %c%c\n", c, c, c, c);
	printf("       %c%c    %c%c\n", c, c, c, c);
	printf("       %c%c    %c%c\n", c, c, c, c);
	printf("         %c%c%c%c\n", c, c, c, c);
	printf("         %c  %c\n", c, c);
	printf("         %c%c%c%c\n", c, c, c, c);
	printf("         %c%c%c%c\n", c, c, c, c);
	printf("         %c%c%c%c\n", c, c, c, c);
	printf("         %c%c%c%c\n", c, c, c, c);
	printf("        %c%c%c%c%c%c\n", c, c, c, c, c, c);
	
	return 0;
}
