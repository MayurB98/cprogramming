// pgm for reverse of string without builtin function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int n,i;
	char str1[10];
	printf("Enter string");
	gets(str1);
	n=strlen(str1);
	for(i=n-1;i>0;i--)
	{
		printf("%c",str1[i]);
	}
	getch();
}