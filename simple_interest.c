#include<stdio.h>
#include<conio.h>
void main()
{
	int p,n;		// principal,time,rate of interest
	float r,si;

	printf("Enter values for principal,time,rate of interest");
	scanf("%d%d%f",&p,&n,&r);

	si=p*n*r/100;

	printf("Simple interest is %f",si);

	getch();

}