#include<stdio.h>
#include<conio.h>

void stringCopy(char[],char[]);
void stringCopy(char str2[],char str1[])
{
	int i=0;
	while(str2[i]=str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}

}

void main()
{
	char str1[15],str2[15];
	printf("Enter string");
	gets(str1);
	stringCopy(str2,str1);
	printf("copied string =%s",str2);

    getch();

}