#include<stdio.h>
#include<conio.h>

int addition();
int addition()
{
	int a,b,c;
	printf("\n Enter values of a,b");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}

void main()
{
	int res;
	res=addition();
	printf("Addition is =%d",res);
	getch();

}