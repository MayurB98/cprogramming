#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			printf("Number is even %d \n",i);
		}
		else
			printf("Number is odd %d \n",i);
	
	}
	getch();

}