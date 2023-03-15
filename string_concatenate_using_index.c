#include<stdio.h>
#include<conio.h>

void stringConcat(char[],char[]);
void stringConcat(char str1[],char str2[])
{
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		i++;	
	}
	while(str1[i]=str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
}
void main()
{
	char str1[15], str2[15];
	printf("Enter first string");
	gets(str1);
	printf("Enter second string");
	gets(str2);
	stringConcat(str1,str2);
	printf("After concatenation =%s",str1);
	getch();

}