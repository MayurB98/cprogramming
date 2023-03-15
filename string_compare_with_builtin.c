//pgm to compare 2 strings using builtin function
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int res;
	char str1[10],str2[10];
	printf("Enter first string \n");
	gets(str1);
	printf("Enter second string");
	gets(str2);
	res=strcmp(str1,str2);
	if(res==1)
		printf("First string is greater");
	else if(res==-1)
		printf("Second string is greater");
	else
		printf("Both strings are equal");
	getch();

}