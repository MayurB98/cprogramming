//Write a pgm to calculate length of string
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int len;
	char str[10];
	printf("Enter string");
	gets(str);
	len=strlen(str);
	printf("\n Display length of string=%d",len);

	getch();
}