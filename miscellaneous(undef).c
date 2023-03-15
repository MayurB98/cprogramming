//pgm for demonstration of undef
#include<stdio.h>
#include<conio.h>
#define MESSAGE printf("Welcome to SEED")

void main()
{
#undef MESSAGE
	MESSAGE;  // MESSAGE is undefined .it gets deleted by undef
	getch();

}