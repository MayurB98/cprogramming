#include<conio.h>
#include<stdio.h>
int stringlen(char *ptr)
{
	int count =0;
	while(*ptr!='\0')
	{
		count++;
		ptr++;
	}
	return count;
}

void main()
{
	int len;
	char str[15];
	printf("Enter string");
	gets(str);
	len=stringlen(str);
	printf("length of string is=%d ",len);
	getch();


}