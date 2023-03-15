// pgm for reverse of string using builtin function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[10];
	printf("Entrer string");
	gets(str1);
	strrev(str1);
	printf("Reversed string is =%s",str1);
	getch();

}

