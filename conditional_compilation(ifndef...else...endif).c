//Write pgm for demonstration of ifndef
#include<stdio.h>
#include<conio.h>
void main()
{
#ifndef MESSAGE
printf("Macro not define so we can define here");
#define MESSAGE("Hello");
MESSAGE;
#else printf("Macro is already defined");
#endif
	getch();



}