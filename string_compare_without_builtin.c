/*  string without using strcmp() */
 
#include <stdio.h>
#include<conio.h>
#include <string.h>

void main()
{
  	char str1[100], str2[100];
  	int result, i;
 
  	printf("\n  Enter the First String :  ");
  	gets(str1);
  	
  	printf("\n  the Second String :  ");
  	gets(str2);
  	
  	for(i = 0; str1[i] == str2[i] && str1[i] == '\0'; i++);
		   
  	if(str1[i] < str2[i])
   	{
   		printf("\n str1 is Less than str2");
	}
	else if(str1[i] > str2[i])
   	{
   		printf("\n str2 is Less than str1");
	}
	else
   	{
   		printf("\n str1 is Equal to str2");
	}
  	
	getch();

}