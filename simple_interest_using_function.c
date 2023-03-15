#include<stdio.h>
#include<conio.h>

void si();
void si()
{
	int p,n;
	float r,res;
	printf("Enter the value of p,n,r");
	scanf("%d%d%f",&p,&n,&r);
	
	res = p*n*r/100;
	printf("Simple interest is =%f",res);
}

void main()
{
	si();
	getch();
}
