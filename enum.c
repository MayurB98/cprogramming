//create enum
#include<stdio.h>
#include<conio.h>

enum COLOR{RED,BLUE,VIOLET,PINK=100,BLACK};

void main()
{
	enum COLOR c;
	c=RED;
	printf(" \n Red color code =%d",c);
	printf(" \n blue color code =%d",BLUE);
	printf(" \n black color code =%d",BLACK);
	getch();
}