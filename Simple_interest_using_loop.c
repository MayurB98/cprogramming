#include<stdio.h>
#include<conio.h>
void main()
{
	int p,n,i=1;
	float r,si;
	while(i<=3)
	{
		printf("Enter values of principal time and rate of interest");
		scanf("%d%d%f",&p,&n,&r);
		si = (p*n*r)/100;
		printf("Simple interest is %f",si);
		i++;
	}

	getch();

}