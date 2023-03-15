#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[15],str2[15];
	printf("Enter first string");
	gets(str1);
	printf("Enter second string");
	gets(str2);
	strcat(str1,str2);
	printf("After concatenation string is %s",str1);
	getch();

}