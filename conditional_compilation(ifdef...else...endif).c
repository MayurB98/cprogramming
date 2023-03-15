// pgm for demonstration of ifdef
#include<stdio.h>
#include<conio.h>
#define MESSAGE printf("Welcome to seed");

void main()
{
#ifdef MESSAGE
	printf("Macro is defined");
#else
	printf("Macro is not defined");
#endif
	getch();


}