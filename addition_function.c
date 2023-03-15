#include<stdio.h>
#include<conio.h>

void addition ();			//function declaration
void addition()				// function defination
{
	int a,b,c;
	printf("Enter values of a ,b \n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Addition is =%d \n",c);
}

void main()
{
	addition();				//function call
	printf("Statement 1 \n");
	printf("Statement 2 \n");
	addition();
	printf("Statement 3 \n");
	printf("Statement 4 \n");
	addition();
	getch();



}
