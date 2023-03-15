#include <stdio.h>
#include<conio.h>
void main()
{
	int num=1;
	while(num<=100)
	{
		if(num%2==0)
		{
			printf("\n Number is Even %d",num);
		}
		else
		{
			printf(" \n Number is Odd %d",num);
		}
		num++;
	}

	getch();
}