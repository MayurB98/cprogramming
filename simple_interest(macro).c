#include<stdio.h>
#include<conio.h>

#define SIMPLEINTEREST(p,n,r) (p*n*r/100)

void main()
{
	int p=1000,n=2,r=4,si;
	si=SIMPLEINTEREST(p,n,r);
	
	printf("Simple interest is=%d",si);

	getch();


}
