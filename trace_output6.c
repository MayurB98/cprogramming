/* Trace output
	22 24 26 28
	30 32 34 36
	38 40 42 44
	46 48 50 52  */

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=22;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++,k=k+2)
		{
			printf("%d \t",k);
		}
		printf("\n");	
	}

	getch();


}